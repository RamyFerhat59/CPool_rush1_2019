/*
** EPITECH PROJECT, 2019
** rush1-1
** File description:
** rush1
*/

void my_putchar(char c);

void rush11(int x, int y)
{
    if (x == 1) {
        for (int col = y; col != 0 ; col--) {
            if (col == 1)
                my_putchar ('o');
            else if (col == y)
                my_putchar ('o');
            else
                my_putchar ('|');
            my_putchar ('\n');
        }
    }
    else {
        for (int col = x; col != 0; col--) {
            if (col == 1)
                my_putchar ('o');
            else if (col == x)
                my_putchar ('o');
            else
                my_putchar ('-');
        }
    }
    my_putchar ('\n');
    return (0);
}

void print_last(int x, int y)
{
    for (int col = x; col != 0; col--) {
        if (col == 1)
            my_putchar ('o');
        else if (col == x)
            my_putchar ('o');
        else
            my_putchar ('-');
    }
}

void print_first(int x, int y)
{
    for ( int col = x; col != 0; col--) {
        if (col == 1)
            my_putchar ('o');
        else if (col == x)
            my_putchar ('o');
        else
            my_putchar ('-');
    }
}

void print_midl(int x, int y)
{
    for (int col2 = x; col2 != 0; col2--) {
        if (col2 == 1)
            my_putchar ('|');
        else if (col2 == x)
            my_putchar ('|');
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
            rush11(x, y);
        }
        else {
            for (int ligne = y; ligne != 0; ligne--) {
                if (ligne == 1) {
                    print_last(x, y);
                }
                else if (ligne == y) {
                    print_first(x, y);
                }
                else {
                    print_midl(x, y);
                }
                my_putchar ('\n');
            }
        }
    }
}
