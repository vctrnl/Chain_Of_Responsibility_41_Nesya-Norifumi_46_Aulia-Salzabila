#pragma once
#include "PokerHandChecker.h"

class StraightChecker : public PokerHandChecker {
public:
    HandRank check(const Hand& hand) override;

private:
    bool isStraight(const Hand& hand);
};