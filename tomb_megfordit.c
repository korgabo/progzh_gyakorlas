#include <stdio.h>

void Tombkiir(const int n, char tomb[]){
    for(int i = 0; i < n; i++){
        printf("%c", tomb[i]);
    }
    puts("");
}

void Char_megfordit(const int n, char tomb[]){
    char tmp;
    int i = 0;
    int j = n-1;
    while (i<j){
        tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;
        i++;
        j--;
    }
}


int main(){
    char betuk[5] = {'a','b','c','d','e'};
    int meret = 5;
    puts("Elotte");
    Tombkiir(meret, betuk);
    Char_megfordit(meret,betuk);
    puts("Utana");
    Tombkiir(meret, betuk);
    return 0;
}