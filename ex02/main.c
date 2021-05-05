#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
    for (int i = 0; i <= ac; i++) {
        write(1, av[i], strlen(av[i]));
    }
}