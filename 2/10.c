#include <stdio.h>
#include <stdint.h>

int main() {
    int id;
    unsigned s;
    float v;
    scanf("%x %o %f", &id, &s, &v);
    uint8_t st = s;
    uint16_t checksum = id + st;
    printf("PACKET_ID: %d\n", id);
    printf("STATUS_CODE: %u\n", (unsigned)st);
    printf("STATUS_CHAR: %c\n", st);
    printf("VOLTAGE: %.2f\n", v);
    printf("CHECKSUM: %u\n", (unsigned)checksum);
}