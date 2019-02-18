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

void set_image(hunter_1_t *set_pic)
{
    set_pic->texture_piaf = sfTexture_createFromFile("assets/piaf.png", NULL);
    set_pic->piaf = sfSprite_create();
    set_pic->texture_fond = sfTexture_createFromFile("assets/fond.jpg", NULL);
    set_pic->fond = sfSprite_create();
    set_pic->texture_mire = sfTexture_createFromFile("assets/mire.png", NULL);
    set_pic->viseur = sfSprite_create();
}

void display_obj(hunter_1_t *set_pic, hunter_2_t *rect_anim)
{
    sfRenderWindow_drawSprite(set_pic->window, set_pic->piaf, NULL);
    sfRenderWindow_drawSprite(set_pic->window, set_pic->viseur, NULL);
    sfSprite_setTexture(set_pic->viseur, set_pic->texture_mire, sfTrue);
    sfRenderWindow_display(set_pic->window);
}

void sight(hunter_1_t *set_pic)
{
    set_pic->pos = sfMouse_getPosition(set_pic->window);
    set_pic->conv.x = set_pic->pos.x - 180;
    set_pic->conv.y = set_pic->pos.y - 135;
    sfSprite_setPosition(set_pic->viseur, set_pic->conv);
    sfRenderWindow_drawSprite(set_pic->window, set_pic->fond, NULL);
}