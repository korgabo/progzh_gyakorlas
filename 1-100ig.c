#include <stdio.h>

int main(){
    int osszeg = 0;
    for(int i = 0; i <= 100; i++){
        osszeg += i;
    }
    printf("A szamok osszege: %d", osszeg);


    return 0;
}