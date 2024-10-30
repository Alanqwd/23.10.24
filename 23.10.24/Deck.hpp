#pragma once
#ifndef DECK_HPP
#define DECK_HPP
#include <vector>
#include "Card.hpp"

namespace CardGame {

    class Deck {
    public:
        Deck() = default;
        Deck(const std::vector<CardGame::Deck>& cards) : cards_(cards) {}
    private:
        std::vector<CardGame::Deck> cards_;
    };
}
#endif 