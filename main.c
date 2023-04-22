#include<stdio.h>
#include<stdlib.h>

int fatorial(int);

int main() {
    int i;

    for(i = 0; i < 10; i++) {
        printf("fatorial(%i) = %i\n", i, fatorial(i));
    }
    return 0;
}

int fatorial(int n) {
    if(n <= 0) {
        return 1;
    } else if(n == 1) {
        return 1;
    } else {
       return n * fatorial(n - 1);
    }
    return -1;
}