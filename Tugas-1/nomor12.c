#include <stdio.h>

int main(){

    double a, t, takeoffspeed, distance;

    printf("Berapa kecepatannya? (dalam km/h) ->");
    scanf("%lf", &takeoffspeed);

    printf("Berapa jaraknya? (dalam meter) ->");
    scanf("%lf", &distance);

    t = (2 * distance) / (takeoffspeed / 3.6);
    a = (takeoffspeed / 3.6) / t;

    printf("\nmaka kecepatan yang terjadi adalah %.2lf m/s^2",a);
    printf("\nmaka waktu yang dibutuhkan adalah %.2lf sekon ",t);

    return 0;
}