/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** description
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
