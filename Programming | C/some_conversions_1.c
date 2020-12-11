#include <stdio.h>
#include <stdlib.h>

#define DECODE_STR "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define DECODE_STR_LENGTH 62

int d2v(char c) {
    int idx = 0;
    while (DECODE_STR[idx] != c && idx < DECODE_STR_LENGTH) ++idx;
    return idx;
}

int s2n(char *s, int b) {
    int i = 0;
    int num = 0;
    while (s[i]) {
        num *= b;
        num += d2v(s[i]);
        ++i;
    }
    return num;
}

int calcNumBaseTwoSize(int num, int base) {
    int sNumSize = 1;
    while (num >= base) {
        num /= base;
        sNumSize++;
    }
    return sNumSize;
}

void n2s(int num, int base, char *sNum, const int size) {
    int i = size - 1;
    int remainder;
    while (num >= base) {
        remainder = num % base;
        num /= base;
        sNum[i] = DECODE_STR[remainder];
        --i;
    }
    sNum[i] = DECODE_STR[num];
}

int main(int argc, char *argv[]) {
    // argv[] version
    int base1 = atoi(argv[1]);
    int base2 = atoi(argv[2]);
    char *sNumBaseOne = argv[3];

    // scanf() version
    // int base1, base2;
    // char* sNumBaseOne;
    // scanf("%d %d %s", &base1, &base2, sNumBaseOne);

    // Convert sNumBaseOne to Decimal
    int Num;
    if (base1 != 10)
        Num = s2n(sNumBaseOne, base1);
    else
        Num = atoi(sNumBaseOne);

    const int NUM_BASE_TWO_SIZE = calcNumBaseTwoSize(Num, base2);
    char sNum[NUM_BASE_TWO_SIZE];
    // Convert Num from Decimal to sNumBaseTwo
    if (base2 != 10)
        n2s(Num, base2, sNum, NUM_BASE_TWO_SIZE);
    else
        sprintf(sNum, "%d", Num);

    for (int i = 0; i < NUM_BASE_TWO_SIZE; ++i)
        printf("%c", sNum[i]);
    printf("\n");
}
