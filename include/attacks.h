#ifndef ATTACKS_H
#define ATTACKS_H

#include "bitboard.h"

extern const U64 not_a_file;
extern const U64 not_h_file;
extern const U64 not_hg_file;
extern const U64 not_ab_file;

extern U64 pawn_attacks[2][64];
extern U64 knight_attacks[64];
extern U64 king_attacks[64];

U64 mask_pawn_attacks(int side, int square);
U64 mask_knight_attacks(int square);
U64 mask_king_attacks(int square);
U64 mask_bishop_attacks(int square);
U64 mask_rook_attacks(int square);
U64 bishop_attacks_on_the_fly(int square, U64 block);
U64 rook_attacks_on_the_fly(int square, U64 block);
void init_leapers_attacks();

#endif // ATTACKS_H