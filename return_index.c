#include <stdio.h>

void Tombkiir(const int n, const int tomb[]){
    for(int i = 0; i < n; i++){
        printf("%d", tomb[i]);
    }
    puts("");
}


int return_index(const int lenght, const int tomb[], const int n){
    for(int i = 0; i<lenght; i++){
        if(n == tomb[i]){;
            return i;
        }
    }
    return -1;
}

int main(){
    int szamok[5] = {1,2,3,4,5};
    int meret = 5;
    Tombkiir(meret, szamok);

    int szam;
    printf("szam: ");
    scanf("%d", &szam);
    puts("");   
    printf("Az altalad megadott szam: %d, a tombben levo indexe: %d", szam, return_index(meret, szamok, szam));
    return 0;
}