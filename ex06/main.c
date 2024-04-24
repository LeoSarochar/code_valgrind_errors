#include <stdio.h>
#include <stdlib.h>

struct squeezer_de_ouf
{
    int first_nb;
    int second_nb;
    int third_nb;
    int fourth_nb;
};

int main()
{
    struct squeezer_de_ouf *squeezer_de_ouf = malloc(sizeof(struct squeezer_de_ouf));
    squeezer_de_ouf->first_nb = 10;
    squeezer_de_ouf->second_nb = 20;
    squeezer_de_ouf->third_nb = 30;
    squeezer_de_ouf->fourth_nb = 40;

    // This code should display the 4 numbers
    // 10
    // 20
    // 30
    // 40
    
    int *ptr = (int *)squeezer_de_ouf;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *ptr);
        ptr += sizeof(int);
    }

    free(squeezer_de_ouf);
    return 0;
}
