#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // char
    printf("char: Size = %zu bytes, Min = %d, Max = %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);

    // unsigned char
    printf("unsigned char: Size = %zu bytes, Min = %d, Max = %u\n",
           sizeof(unsigned char), 0, UCHAR_MAX);

    // short
    printf("short: Size = %zu bytes, Min = %d, Max = %d\n",
           sizeof(short), SHRT_MIN, SHRT_MAX);

    // unsigned short
    printf("unsigned short: Size = %zu bytes, Min = %d, Max = %u\n",
           sizeof(unsigned short), 0, USHRT_MAX);

    // int
    printf("int: Size = %zu bytes, Min = %d, Max = %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    // unsigned int
    printf("unsigned int: Size = %zu bytes, Min = %u, Max = %u\n",
           sizeof(unsigned int), 0, UINT_MAX);

    // long
    printf("long: Size = %zu bytes, Min = %ld, Max = %ld\n",
           sizeof(long), LONG_MIN, LONG_MAX);

    // unsigned long
    printf("unsigned long: Size = %zu bytes, Min = %u, Max = %lu\n",
           sizeof(unsigned long), 0, ULONG_MAX);

    // long long
    printf("long long: Size = %zu bytes, Min = %lld, Max = %lld\n",
           sizeof(long long), LLONG_MIN, LLONG_MAX);

    // unsigned long long
    printf("unsigned long long: Size = %zu bytes, Min = %u, Max = %llu\n",
           sizeof(unsigned long long), 0, ULLONG_MAX);

    // float
    printf("float: Size = %zu bytes, Min = %e, Max = %e\n",
           sizeof(float), FLT_MIN, FLT_MAX);

    // double
    printf("double: Size = %zu bytes, Min = %e, Max = %e\n",
           sizeof(double), DBL_MIN, DBL_MAX);

    // long double
    printf("long double: Size = %zu bytes, Min = %Le, Max = %Le\n",
           sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}
