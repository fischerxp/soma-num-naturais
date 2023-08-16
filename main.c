#include <stdio.h>
#include <stdlib.h>

/*Apresentar o total da soma obtida dos cem primeiros números inteiros.*/
/*desenvolvedor: fischerxp*/

int main()
{
        int num=0;
        int L;
        for (L=1; L<=100; L++)
        num=num+L;
        printf("A soma total e de: %d", num);
        return 0;
}
