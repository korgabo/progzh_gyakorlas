#include <stdio.h>
#include <stdlib.h>

void Tombkiir(const int n, const int tomb[]){
    for(int i = 0; i < n; i++){
        printf("%d", abs(tomb[i]));
    }
    puts("");
}

int main(){
 int szamok[5] = {1,-1,3,-4,5};
 int meret = 5;
 Tombkiir(meret,szamok);
    return 0;
}
