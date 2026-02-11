#include <stdio.h>

int bisexto(int ano){ //calcula ano bisexto
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        return 1;
    } else return 0;
    

}


int main(){
    int ano;
    scanf("%d",&ano);
    printf("%d\n",bisexto(ano));
    return 0;
}