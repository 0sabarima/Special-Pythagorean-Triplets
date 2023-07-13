#include <stdio.h>
#include <stdlib.h>

int square(int);
int sroot(int);

int main() {
    int sumSquareBoth, hypotenuse, result, sum, product;
    int i, j;
    for(i = 1; i <= 1000; i++) {
        for(j = 2; j <= 1000; j++) {
            sumSquareBoth = square(i) + square(j);
            if(i < j && sroot(sumSquareBoth) != 0) {
                sum = i + j + sroot(sumSquareBoth);
                if(sum == 1000) {
                    product = i * j * sroot(sumSquareBoth);
                    printf("%d, %d and %d pythagorean triplets sum up to 1000\nTheir product is %d", i, j, sroot(sumSquareBoth), product);
                    break;
                }
            }
        }
        if(sum == 1000) {
            break;
        }
    }

    return 0;
}

int square(int x) {

    return (x * x);
}

int sroot(int x) {
    int i;
    int fin = 0;
    for(i = 1; i < x; i++) {
        if(i * i == x) {
            fin = i;
        }
    }
    return (fin);
}
