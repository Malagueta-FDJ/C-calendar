#include <stdio.h>
#include <string.h>



char semana(int y, int m, int d) {//devolve o dia da semana
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    if(m < 3){
        y -= 1;
    }

    int dia_posic = (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
    printf("%d",dia_posic);
        switch (dia_posic)
    {
    case 1: return 'S';
    case 2: return 'T';
    case 3: return 'Q';
    case 4: return 'Q';
    case 5: return 'S';
    case 6: return 'S';
    case 7: return 'D';
    default:
        return 'm';
        break;
    }
}

int main(){
    int dia;
    int mes;
    int ano;
    
    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d",&ano);    
    printf("\n%c\n",(semana(26,2,10)));

    return 0;
}