/*
** EPITECH PROJECT, 2019
** rush1-2
** File description:
** rush1-2
*/

void my_putchar(char c);
    
void rush12(int x, int y)
{
    if (x == 1) {
        for (int i = y; i != 0 ; i--) {
            my_putchar ('*');
            my_putchar ('\n');
        }
    }
    else {
        for (int i = x; i != 0 ; i--) {
            my_putchar ('*');
        }
        my_putchar ('\n');
    }
    return (0);
}

void print_last2(int x, int y)
{
    for (int col = x; col != 0; col--) {
        if (col == 1)
            my_putchar ('/');
        else if (col == x)
            my_putchar ('\\');
        else
            my_putchar ('*');
    }
}

void print_first2(int x, int y)
{
    for ( int col = x; col != 0; col--) {
        if (col == 1)
            my_putchar ('\\');
        else if (col == x)
            my_putchar ('/');
        else
            my_putchar ('*');
    }
}

void print_midl2(int x, int y)
{
    for (int col2 = x; col2 != 0; col2--) {
        if (col2 == 1)
            my_putchar ('*');
        else if (col2 == x)
            my_putchar ('*');
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
            rush12(x, y);
        }
        else {
            for (int ligne = y; ligne != 0; ligne--) {
                if (ligne == 1) {
                    print_last2(x, y);
                }
                else if (ligne == y) {
                    print_first2(x, y);
                }
                else {
                    print_midl2(x, y);
                }
                my_putchar ('\n');
            }
        }
    }
}
