#include <stdio.h>

int main(){

    int szam;
    int pozitiv = 0;
    int negativ = 0;
    while(1){
        printf("Egesz szam (vege: 0):");
        scanf("%d",&szam);
        if(szam > 0){
            ++pozitiv;
        }
        if(szam < 0){
            ++negativ;
        }
        if(szam == 0){
            break;
        }
    }
    printf("A pozitív elemek osszege: %d\n",pozitiv);
     printf("A negativ elemek osszege: %d\n",negativ);



    return 0;
}