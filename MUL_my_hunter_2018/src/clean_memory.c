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

void destroy(hunter_1_t *set_pic, hunter_3_t *music, hunter_4_t *set_clock)
{
    sfTexture_destroy(set_pic->texture_piaf);
    sfSprite_destroy(set_pic->fond);
    sfTexture_destroy(set_pic->texture_fond);
    sfSprite_destroy(set_pic->viseur);
    sfTexture_destroy(set_pic->texture_mire);
    sfSprite_destroy(set_pic->piaf);
    sfClock_destroy(set_clock->clock);
    sfMusic_destroy(music->music);
    sfMusic_destroy(set_pic->gun);
    sfRenderWindow_destroy(set_pic->window);
}

void freedom(hunter_2_t *rect_anim, hunter_3_t *music, hunter_4_t *set_clock)
{
    free(set_clock);
    free(music);
    free(rect_anim);
}