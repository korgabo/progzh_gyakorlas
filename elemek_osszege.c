#include <stdio.h>

int main(){

    int szam;
    int osszeg = 0;
    while(1){
        printf("Egesz szam (vege: 0):");
        scanf("%d",&szam);
        osszeg += szam;
        if(szam == 0){
            break;
        }
    }
    printf("Az elemek osszege: %d",osszeg);



    return 0;
}