#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/double_list.h"

#define amostra 10000

int
main()
{
    srand(time(NULL));
    struct cabeca *a = create();
    for(int i = 0; i < amostra; i++)
    {
        add(a, (10 + rand()%8), (150 + rand()%50));
    }

    float x = matriz_z(padroniza(165, a));
    // resposta (a)
    fprintf(stdout, "%f\n", x);
    
    float n = (float)localizacao(75)/100;

    n *= desvio(a);

    fprintf(stdout, "o intervalo eh :: (%.2f, %.2f)\n", ((media(a) - n)), (n + (media(a))));

    return 0;
}