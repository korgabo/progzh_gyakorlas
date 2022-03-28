#include <stdio.h>
#include <math.h>

double get_double(){
    double d;
    scanf("%lf",&d);
    return d;
}

double felszin(int r){
    double a = 4* (r*r) * M_PI;
    return a;
}
double terfogat(int r){
    double v = (4* (r*r*r) * M_PI)/3;
    return v;
}


int main(){
    puts("Adja meg a gomb sugarat!");
    printf("Gombsugar: ");
    double r = get_double(); 
    double a = felszin(r);
    double v = terfogat(r);
    printf("\nA gomb felszine: %.2lf",a);
    printf("\nA gomb terfogata: %.2lf",v);
    return 0;
}