#include <stdio.h>

int main () {

    double panjang1, lebar1, panjang2, lebar2, waktu;

    printf("Panjang dari kebun tersebut? ->\n");
    scanf("%lf", &panjang1);

    printf("Lebar dari kebun tersebut? ->\n");
    scanf("%lf", &lebar1);

    printf("Panjang dari rumah tersebut? ->\n");
    scanf("%lf", &panjang2);

    printf("Lebar dari rumah tersebut? ->\n");
    scanf("%lf", &lebar2);

    waktu = ((panjang1 * lebar1) - (panjang2 * lebar2)) / 2;

    printf("Waktu yang dibutuhkan mesin tersebut adalah %.2f", waktu);

    return 0;
}