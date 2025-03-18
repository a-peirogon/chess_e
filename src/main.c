#include "../include/bitboard.h"
#include "../include/attacks.h"

int main() {
    init_leapers_attacks();

    U64 block = 0ULL;
    set_bit(block, d7);
    set_bit(block, d2);
    set_bit(block, d1);
    set_bit(block, b4);
    set_bit(block, g4);
    print_bitboard(block);

    printf("Bit count: %d\n", count_bits(block));
    return 0;
}