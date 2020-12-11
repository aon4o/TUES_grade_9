#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <values.h>
#include <sys/param.h>

#define IN_RANGE(c, from, to) ((from) <= (c) && (c) <= (to))

#define M(c, from, to, offset) \
    if ((from) <= (c) && (c) <= (to)) \
        return c - from + offset;

typedef unsigned long long num_t;

int c2v(char c) {
    M(c, '0', '9', 0);
    M(c, 'A', 'Z', 10);
    M(c, 'a', 'z', 36);
    return -1;
}

bool s2n(num_t *n, const char *s, int base) {
    *n = 0;
    while (*s)
        *n = base * *n + c2v(*s++);

    return true;
}

char v2c[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";

char *n2s(char *out, num_t n, int base) {
    num_t remainder = n / base;
    if (remainder)
        out = n2s(out, remainder, base);
    *out = v2c[n % base];
    *++out = 0;
    return out;
}

//void n2s(char** out, num_t n, int base)
//{
//    num_t remainder = n / base;
//    if (remainder)
//        n2s(out, remainder, base);
//    **out = v2c(n%base);
//    ++*out;
//    **out = 0;
//}

int main(int argc, const char *const argv[]) {
    int b1 = atoi(argv[1]);
    int b2 = atoi(argv[2]);
    if (sizeof(v2c) < MAX(b1, b2)) {
        printf("invalid input\n");
        return -1;
    }
    num_t n;
    s2n(&n, argv[3], atoi(argv[1]));
    char out[sizeof(num_t) * CHAR_BIT + 1];
//    char *p = out;
    n2s(out, n, atoi(argv[2]));
    printf("%s\n", out);
    return 0;
}