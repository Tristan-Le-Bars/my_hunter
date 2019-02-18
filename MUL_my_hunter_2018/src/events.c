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

void respawn_duck(hunter_1_t *set_pic)
{
    set_pic->fly.x = -110;
    set_pic->fly.y = (rand() % 770 + 110);
    sfSprite_setPosition(set_pic->piaf, set_pic->fly);
}

int hitbox(sfVector2f fly, sfMouseButtonEvent event)
{
    if (event.x <= fly.x + 110 && event.x >= fly.x){
        if (event.y <= fly.y + 110 && event.y >= fly.y){
            return (1);
        }
    }
    else
    return (0);
}

void mouse_click(sfMouseButtonEvent event, sfVector2f fly, hunter_1_t *set_pic)
{
    if (hitbox(fly, event) == 1) {
        respawn_duck(set_pic);
    }
}

void sc_ev(sfRenderWindow *win, sfEvent event, sfVector2f fly, hunter_1_t *sp)
{
    if (event.type == sfEvtMouseButtonPressed) {
        mouse_click(event.mouseButton, fly, sp);
        sfMusic_play(sp->gun);
        sfMusic_setVolume(sp->gun, 25);
    }
}

void evenement(hunter_1_t *set_pic, sfVector2f fly)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(set_pic->window, &event)) {
        sc_ev(set_pic->window, event, fly, set_pic);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(set_pic->window);
    }
}