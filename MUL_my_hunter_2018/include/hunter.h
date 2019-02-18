/*
** EPITECH PROJECT, 2018
** hunter.h
** File description:
** hunter header
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdio.h>
#include <time.h>
#include <SFML/Audio.h>
#include "structure1.h"

#ifndef HUNTER_H_
#define HUNTER_H_

int hitbox(sfVector2f fly, sfMouseButtonEvent event);
void manage_mouse_click(sfMouseButtonEvent event, sfVector2f fly);
void analyse_events(sfRenderWindow *window, sfEvent event, sfVector2f fly);
void evenement(hunter_1_t *set_pic, sfVector2f fly);
void move_rect(sfIntRect *rect, int offset, int max_value);
void set_image(hunter_1_t *set_pic);
void rectanime(hunter_2_t *rect_anim);
void my_clock(hunter_4_t *set_my_clock);
void clock_anim(hunter_4_t *set_my_clock, hunter_2_t *rect_anim);
void sight(hunter_1_t *set_pic);
void destroy(hunter_1_t *set_pic, hunter_3_t *music, hunter_4_t *set_clock);
void freedom(hunter_2_t *rect_anim, hunter_3_t *music, hunter_4_t *set_clock);

#endif
