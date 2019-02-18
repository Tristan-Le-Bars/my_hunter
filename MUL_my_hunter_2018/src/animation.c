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

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left = offset + rect->left;
    if (rect->left >= max_value)
        rect->left = 0;
}

void rectanime(hunter_2_t *rect_anim)
{
    rect_anim->rect.top  = 0;
    rect_anim->rect.left = 0;
    rect_anim->rect.width = 110;
    rect_anim->rect.height = 110;
}

void move_duck(hunter_1_t *set_pic, hunter_2_t *rect_anim)
{
    if (set_pic->fly.x < 1920) {
        set_pic->fly.x = set_pic->fly.x + 7;
        flying_duck(set_pic, rect_anim, set_pic->fly);
    }
    else {
        set_pic->fly.x = -110;
    }
}
