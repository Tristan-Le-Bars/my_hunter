/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** a homemade version of duckhunt
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "../include/my.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Audio.h>
#include "../include/structure1.h"
#include "../include/hunter.h"

void Music(hunter_3_t *music_management)
{
    music_management->music = sfMusic_createFromFile("assets/duck_music.ogg");
    sfMusic_setLoop(music_management->music, sfTrue);
    sfMusic_play(music_management->music);
    sfMusic_setVolume(music_management->music, 25);
}

void flying_duck(hunter_1_t *set_pic, hunter_2_t *rect_anim, sfVector2f fly)
{
    sfSprite_setTexture(set_pic->piaf, set_pic->texture_piaf, sfTrue);
    sfSprite_setTextureRect(set_pic->piaf, rect_anim->rect);
    sfSprite_setPosition(set_pic->piaf, fly);
}

void set_f(hunter_1_t *sp, hunter_2_t *anim, hunter_3_t *zic, hunter_4_t *sc)
{
    set_image(sp);
    rectanime(anim);
    Music(zic);
    my_clock(sc);
}

int create_window(hunter_1_t *sp)
{
    sfVideoMode mode = {1920, 1080, 32};
    sp->window = sfRenderWindow_create(mode, "hunt", sfResize | sfClose, NULL);
    if (!sp->window)
        return EXIT_FAILURE;
}

int main(void)
{
    hunter_1_t *set_pic = malloc(sizeof(hunter_1_t));
    hunter_2_t *rect_anim = malloc(sizeof(hunter_2_t));
    hunter_3_t *music = malloc(sizeof(hunter_3_t));
    hunter_4_t *set_clock = malloc(sizeof(hunter_4_t));
    srand(time(NULL));
    create_window(set_pic);
    set_pic->gun = sfMusic_createFromFile("assets/gun_shoot.ogg");
    set_f(set_pic, rect_anim, music, set_clock);
    sfSprite_setTexture(set_pic->fond, set_pic->texture_fond, sfTrue);
    sfRenderWindow_setFramerateLimit(set_pic->window, 120);
    while (sfRenderWindow_isOpen(set_pic->window)) {
        clock_anim(set_clock, rect_anim);
        sight(set_pic);
        move_duck(set_pic, rect_anim);
        display_obj(set_pic);
        evenement(set_pic, set_pic->fly);
    }
    destroy(set_pic, music, set_clock);
    freedom(rect_anim, music, set_clock);
    return EXIT_SUCCESS;
}
