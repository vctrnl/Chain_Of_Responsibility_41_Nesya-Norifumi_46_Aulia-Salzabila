#pragma once
#include "PokerHandChecker.h"

class FiveOfAKindChecker : public PokerHandChecker {
public:
    HandRank check(const Hand& hand) override {
        std::cout << "Checking Five of a Kind...\n";

        if (hand.presetRank == HandRank::Five_OF_A_KIND) {
            std::cout << "Five of a Kind detected!\n";
            return HandRank::Five_OF_A_KIND;
        }

        if (nextChecker != nullptr) {
            return nextChecker->check(hand);
        }

        return HandRank::HIGH_CARD;
    }
};