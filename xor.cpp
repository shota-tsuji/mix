#include <cstdint>
#include <climits>
#include <cstdio>

// xor を計算する
uint32_t func_xor(uint32_t a, uint32_t b) {
    //uint32_t message = 0;
    return a ^ b;
}

// ビット単位で表示する
void printb(uint32_t v) {
    uint32_t mask = (int)1 << (sizeof(v) * CHAR_BIT -1);
    do {
        putchar(mask & v ? '1' : '0');
    } while (mask >>= 1);
}

void putb(uint32_t v) {
    putchar('0'), putchar('b'), printb(v), putchar('\n');
}

int main() {
    putb(0);
    putb(8);
    putb(func_xor(8, 8));
    putb(func_xor(124, 0));
    putb(116);
    putb(func_xor(124, 116));

    return 0;
}
