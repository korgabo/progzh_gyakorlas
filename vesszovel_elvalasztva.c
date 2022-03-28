#include <stdio.h>

void Tombkiir(const int n, const int tomb[]){
    for(int i = 0; i < n-2; i++){
        printf("%d, ", tomb[i]);
    }
    
    printf("%d", tomb[n-1]);
    puts("");
}

int main(){
 int szamok[5] = {1,1,3,4,5};
 int meret = 5;
 Tombkiir(meret,szamok);
    return 0;
}
