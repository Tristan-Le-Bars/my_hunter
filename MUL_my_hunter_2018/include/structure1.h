/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** a homemade version of duckhunt
*/

#pragma once

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Audio.h>

typedef struct s_pic
{
    sfRenderWindow *window;
    sfTexture *texture_piaf;
    sfTexture *texture_fond;
    sfTexture *texture_mire;
    sfSprite *piaf;
    sfSprite *fond;
    sfSprite *viseur;
    sfVector2f fly;
    sfVector2i pos;
    sfVector2f conv;
    sfMusic *gun;
}hunter_1_t;

typedef struct s_rect
{
    sfIntRect rect;
}hunter_2_t;

typedef struct s_music
{
    sfMusic *music;
}hunter_3_t;

typedef struct s_clock
{
    sfClock *clock;
    sfTime time;
    float seconds;
}hunter_4_t;
