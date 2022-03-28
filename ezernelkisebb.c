#include <stdio.h>

int main(){
    int osszeg = 0;
    for(int i = 0; i < 1000; i++){
        if((i % 5 == 0) || (i % 3 == 0)){
        osszeg += i;}
    }
    printf("A szamok osszege: %d", osszeg);


    return 0;
}