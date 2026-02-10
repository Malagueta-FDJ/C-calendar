#include <stdio.h>
#include <string.h>
int qntd_dias(int mes){ //retorna a quantidade de dias no mes entregue
    switch (mes){
    case 1: return 31;
    case 2: return 29; //fazer sistema que calcula ano bisexto
    case 3: return 31;
    case 4: return 30;
    case 5: return 31;
    case 6: return 30;
    case 7: return 31;
    case 8: return 30;
    case 9: return 31;
    case 10: return 30;
    case 11: return 31;
    case 12: return 30;
    default: return -1;
    }
}

void calendario(){ //imprime o calendario, sem os dias da semana
    for (int i = 1; i <= 12; i++)
    {
        printf("mes: %d\n",i);
        for (int j = 1; j <= qntd_dias(i); j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
};

int main()
{
    int opc;
    calendario();

    return 0;
}
