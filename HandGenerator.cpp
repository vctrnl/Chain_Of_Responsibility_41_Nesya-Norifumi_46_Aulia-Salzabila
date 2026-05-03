Hand HandGenerator::generateHand() {
    Hand hand;
    hand.cards.clear();
    
    // Shuffle deck 52 kartu
    std::vector<Card> deck;
    for (int suit = 0; suit < 4; suit++) {
        for (int rank = 1; rank <= 13; rank++) {
            deck.push_back({rank, suit});
        }
    }
    
    // Random shuffle
    std::random_shuffle(deck.begin(), deck.end());
    
    // Deal 8 kartu pertama
    for (int i = 0; i < 8; i++) {
        hand.cards.push_back(deck[i]);
    }
    
    return hand;
}