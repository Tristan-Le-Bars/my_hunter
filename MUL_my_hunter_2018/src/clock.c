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

void my_clock(hunter_4_t *set_my_clock)
{
    set_my_clock->clock = sfClock_create();
}

void clock_anim(hunter_4_t *set_my_clock, hunter_2_t *rect_anim)
{
    set_my_clock->time = sfClock_getElapsedTime(set_my_clock->clock);
    set_my_clock->seconds = set_my_clock->time.microseconds / 1000000.0;
    if (set_my_clock->seconds > 0.1) {
        move_rect(&rect_anim->rect, 110, 330);
        sfClock_restart(set_my_clock->clock);
    }
}