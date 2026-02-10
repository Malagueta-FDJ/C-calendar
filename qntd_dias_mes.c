#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curses.h>

int qntd_dias(int mes){
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

int main()
{
    int opc;
    scanf("%d",&opc);
    printf("%d",qntd_dias(opc)); //teste "qntd_dias"


    return 0;
}
