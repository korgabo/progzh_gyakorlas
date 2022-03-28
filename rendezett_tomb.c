#include <stdio.h>

void Tombkiir(const int n, const int tomb[]){
    for(int i = 0; i < n; i++){
        printf("%d", tomb[i]);
    }
    puts("");
}
int rendezett_tomb(const int n, const int tomb[]){
    int result = tomb[0];
    for (int i = 1; i < n; i++)
    {
        if(tomb[i] < tomb[0]){
            return 0;
        }
    return 1;
    }
    
    }

int main(){
 int szamok[5] = {1,1,3,4,5};
 int meret = 5;
 Tombkiir(meret,szamok);
 printf("Ez a tomb %s.", rendezett_tomb(meret, szamok) ? "rendezett" : "nem rendezett");
    return 0;
}
