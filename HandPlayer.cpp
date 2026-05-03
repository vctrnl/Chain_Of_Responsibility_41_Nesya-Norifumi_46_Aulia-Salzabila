void HandPlayer::playHand(Hand& hand) {
    std::cout << "\n=== Your 8 Cards ===\n";
    
    // Display 8 kartu
    for (int i = 0; i < hand.cards.size(); i++) {
        std::cout << i+1 << ". Rank:" << hand.cards[i].rank 
                  << " Suit:" << hand.cards[i].suit << "\n";
    }
    
    // Player pilih 5 kartu (untuk sekarang auto pilih 5 pertama)
    // Nanti bisa tambah input user
    std::vector<Card> selected;
    for (int i = 0; i < 5; i++) {
        selected.push_back(hand.cards[i]);
    }
    
    hand.cards = selected; // Replace dengan 5 kartu terpilih
    std::cout << "\nPlaying 5 cards...\n";
}