#pragma once
#include "Hand.h"

enum class HandRank {
    HIGH_CARD,
    PAIR,
    STRAIGHT,
    FLUSH
};

class PokerHandChecker {
public:
    virtual ~PokerHandChecker() = default;
    virtual HandRank check(const Hand& hand) = 0;

    void setNext(PokerHandChecker* next);

protected:
    PokerHandChecker* nextChecker = nullptr;
};