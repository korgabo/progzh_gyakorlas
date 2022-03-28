#include <stdio.h>

void Tombkiir(const int n, const int tomb[]){
    for(int i = 0; i < n; i++){
        printf("%d", tomb[i]);
    }
    puts("");
}

int contains(const int lenght, const int tomb[], const int n){
    for(int i = 0; i<lenght; i++){
        if(n == tomb[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int szamok[5] = {1,2,3,4,5};
    int meret = 5;
    Tombkiir(meret, szamok);

    int szam;
    printf("szam: ");
    scanf("%d", &szam);
    puts("");   
    printf("Az altalad megadott szam: %d, %s", szam, contains(meret, szamok, szam) ? "benne van a tombben" : "nincs benne a tombbe");
    return 0;
}