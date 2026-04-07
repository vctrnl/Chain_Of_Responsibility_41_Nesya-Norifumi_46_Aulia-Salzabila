#pragma once
#include <vector>

struct Card {
    int rank = 0; // 1-13
    int suit = 0; // 0-3
};

struct Hand {
    int value = 0;                // dummy value-based prototype
    std::vector<Card> cards;      // disiapkan untuk pengembangan nanti
};