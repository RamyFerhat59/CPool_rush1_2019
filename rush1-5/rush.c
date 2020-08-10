/*
** EPITECH PROJECT, 2019
** rush1-5.c
** File description:
** rush1-5
*/

void my_putchar(char c);

void rush15(int x, int y)
{
    if (x == 1) {
        for (int i = y; i != 0 ; i--) {
            my_putchar ('B');
            my_putchar ('\n');
        }
    }
    else {
        for (int i = x; i != 0 ; i--) {
            my_putchar ('B');
        }
        my_putchar ('\n');
    }
    return (0);
}
void print_last5(int x, int y)
{
    for (int col = x; col != 0; col--) {
        if (col == 1)
            my_putchar ('A');
        else if (col == x)
            my_putchar ('C');
        else
            my_putchar ('B');
    }
}
    
void print_first5(int x, int y)
{
    for (int col = x; col != 0; col--) {
        if (col == 1)
            my_putchar ('C');
        else if (col == x)
            my_putchar ('A');
        else
            my_putchar ('B');
    }
}

void print_midl5(int x, int y)
{
    for (int col2 = x; col2 != 0; col2--) {
        if (col2 == 1)
            my_putchar ('B');
        else if (col2 == x)
            my_putchar ('B');
        else
            my_putchar (' ');
    }
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        write(2, "Invalid size\n", 13);
    }
    else {
        if (x == 1 || y == 1)
        {
            rush15(x, y);
        }
        else {
            for (int ligne = y; ligne != 0; ligne--) {
                if (ligne == 1) {
                    print_last5(x, y);
                }
                else if (ligne == y) {
                    print_first5(x, y);
                }
                else {
                    print_midl5(x, y);
                }
                my_putchar ('\n');
            }
        }
    }
}
