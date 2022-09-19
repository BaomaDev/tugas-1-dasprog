#include <stdio.h>
#define btu 5800000

int main () {

    double galon, efficiency, heat;

    printf("efficientnya berapa persen? ->\n");
    scanf("%lf", &efficiency);

    printf("oilnya berapa galon? ->\n");
    scanf("%lf", &galon);

    heat = (efficiency/100) * (galon/42) * btu;

    printf("Maka, BTU dari galon tersebut adalah: %.2f", heat);

    return 0;
}