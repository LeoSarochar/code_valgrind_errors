#include <unistd.h>

int main(int ac, char **av)
{
    char *tab;
    tab[0] = 'Y';
    tab[1] = 'o';
    tab[2] = '\n';
    write(1, tab, 3);
}