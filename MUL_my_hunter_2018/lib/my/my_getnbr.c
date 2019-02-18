/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** description
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        }
        nb = nb + str[i] + '0';
        nb = nb * 10;
        i++;
    }
    nb /= 10;
    if (str[0] == '-')
        return (-1 * nb);
    else
        return (nb);
}
