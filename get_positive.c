#include <stdio.h>


int get_positive_int_v2(){
    int szam = 0;
    while(!(szam > 0)){
        printf("Adj meg egy pozitiv szamot: ");
        scanf("%d",&szam);
        if(szam<= 0){
            puts("Hiba!");
        }
    }
    return szam;
}

int main(){
    int szam = get_positive_int_v2();

    printf("Az altalad megadott szam: %d",szam);
    return 0;
}