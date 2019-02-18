/*
** EPITECH PROJECT, 2018
** my_putnbr
** File description:
** description
*/

void my_putchar(char c);

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putnbr(nb %10);
    }
    else
        my_putchar(nb + '0');
}
