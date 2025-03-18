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

    print_bitboard(rook_attacks_on_the_fly(d4, block));

    return 0;
}