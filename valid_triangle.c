#include <stdio.h>


double get_double(){
    double d;
    while(1){
    printf("Valos szam: ");
    scanf("%lf",&d);
    if(d>0){
        break;
    }
    else{
        puts("Hiba!");
    }
    }
    return d;
}

int valid_triangle(double a, double b, double c){
    if(a+b > c && a+c > b && c+b > a){
        return 1;
    }
else{
return 0;
}
}


int main(){
    printf("# A oldal #\n");
    double a = get_double();
    puts("");
    printf("# B oldal #\n");
    double b = get_double();
    puts("");
    printf("# C oldal #\n");
    double c = get_double();
    puts("");
    puts("# Az altalad megadott 3 oldal #");
    printf("A: %lf, B: %lf, C: %lf\n\n",a,b,c);

    int szerkesztheto = valid_triangle(a,b,c);
    if (szerkesztheto == 1){
        printf("Ezekbol az oldalakbol a haromszog megszerkesztheto\n");
    }
    else{
        printf("Nem szerkesztheto\n");
    }

    return 0;
}