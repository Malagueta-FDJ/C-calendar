#include <stdio.h>

int bisexto(int ano){
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        return 1;
    } else return 0;
    

}


int main(){
    printf("%d",bisexto(2026));
    return 0;
}