HandRank check(const Hand& hand) override {
    std::map<int, int> rankCount;
    
    // Count berapa kali setiap rank muncul
    for (const Card& card : hand.cards) {
        rankCount[card.rank]++;
    }
    
    // Cek apakah ada rank yang muncul tepat 2x
    for (auto& pair : rankCount) {
        if (pair.second == 2) {
            std::cout << "Pair detected!\n";
            return HandRank::PAIR;
        }
    }
    
    // Kalau bukan pair, lanjut ke checker berikutnya
    if (nextChecker != nullptr) {
        return nextChecker->check(hand);
    }
    
    return HandRank::HIGH_CARD;
}