#include <stdio.h>

void Sorkiir(int szelesseg, int csillagok){
    int szokoz = (szelesseg-csillagok) / 2;
    for (int i = 1; i <= szokoz; i++)
    {
        putchar(' ');
    }
    for(int i = 1; i <= csillagok; i++){
        putchar('*');
    }    
    puts("");
    
}

int main(){
    int n = 7;
    for (int i = 1; i <= n; i += 2){
        Sorkiir(n, i);
        }
    for (int i = n-2; i > 0; i -=2)
    {
        Sorkiir(n, i);
    }
    
    return 0;
}