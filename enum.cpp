//
// Created by Felix Vargas Jr on 12/2/24.
//



#include <iostream>

namespace CardGame_Scoped {
    enum class Suit { // private enum
        Diamonds, Hearts, Clubs, Spades
    };

    void PlayCard(Suit suit) {
        if (suit == Suit::Clubs) { // Enum must be qualified by enum type
            // TODO
        }
    }
}

namespace ScopedCardGame {
    enum Suit {Diamonds, Hearts, Clubs, Spades};

    void PlayCard(Suit suit) {
        if (suit == Hearts) { // enums is visible w/o qualification
            // TODO
        }
    }
}

namespace ScopedEnumConversions {
    enum class Suit{Diamonds, Hearts, Clubs, Spades};


    void AttemptConversions() {
        Suit hand;
        hand = Clubs ;// Error : Clubs has undeclared identifier -> needs Suits::Clubs
        hand = Suit::Clubs; // Correct

        int account = 12345;
        hand = account; // ERROR, cant convert int to Suit
        hand = static_cast<Suit>(account); // OK , but probably a bug;


        account = Suit::Clubs; // ERROR cant convert from 'Suit' to 'int'
        account = static_cast<int>(Suit::Hearts); // Ok! explicit cast

    };
}