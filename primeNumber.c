#include <stdio.h>

int main() {
    int n, i, asal = 1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (n < 2) {
        asal = 0; // 0 ve 1 asal değildir
    } else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                asal = 0;
                break;
            }
        }
    }

    if (asal == 1)
        printf("%d asal sayidir.\n", n);
    else
        printf("%d asal sayi degildir.\n", n);

    return 0;
}