#include <stdio.h>

int isPrime(int number) {
    if (number < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac so nguyên to dau tien la: \n");

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
