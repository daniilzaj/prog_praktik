#include <stdio.h>
#include <stdint.h>
#define P printf
#define R(T, mn, mx) P(#T ": SIZE=%zu MIN=%lld MAX=%lld COUNT=%lld\n", \
    sizeof(T), (long long)(mn), (long long)(mx), (long long)(mx) - (long long)(mn) + 1)

int main() {
    R(int8_t,   INT8_MIN,  INT8_MAX);
    R(uint8_t,  0,         UINT8_MAX);
    R(int16_t,  INT16_MIN, INT16_MAX);
    R(uint16_t, 0,         UINT16_MAX);
    R(int32_t,  INT32_MIN, INT32_MAX);
    R(uint32_t, 0,         UINT32_MAX);
}