#include <stdio.h>

#define FLAG 'a'

int main(int argc, char **argv) {
    char hello[] = "Hello, world";
    char *world = "Hello, world";
    char h = 'H';
    unsigned char num = 128;
    // 1 байт или 8 бит

    unsigned int a = -1; // 4 байта или 32 бита (2 байта, 16 бит)
    unsigned long int b = 10; // 8 байт или 64 бита (4 байта, 32 бита)
    unsigned long long int c = 100; // 8 байт или 64 бита (8 байт, 64 бита)
    unsigned short int d = 0; // 2 байта, 16 бит (2 байта, 16 бит)

    const float e = 0.5; // 4 байта или 32 бита (2 байта, 16 бит)
    const double f = 0.25; // 8 байт или 64 бита (8 байт, 64 бита)
    const long double g = 0.125; // 10 байт или 80 бит (128 бит) 

    const char flag = 'a';

    a += 1;

    size_t some_size = sizeof(h);

    printf("%lu\n", some_size);
    printf("%u\n", a);

    return 0;
}