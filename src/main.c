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

    float x = search_in_z_matrix(padroniza(160, a));
    
    fprintf(stdout, "%f\n", x);
    
    return 0;
}