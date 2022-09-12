#include <stdio.h>

int main(){

    int base1,base2,area,altura;

    printf("Digite base mayor: "); scanf("%i,base1");
    printf("Digite base menor: "); scanf("%i,base2");
    printf("Digite la altura: "); scanf("%i,altura");

    //formula
    area=((base1+base2)*altura)/2;

    printf("\n El area del trapecio es: %i",area);

    return 0;

}
