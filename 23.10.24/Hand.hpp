#pragma once
#ifndef HAND_HPP
#define HAND_HPP
#include <vector>
#include "Card.hpp"

namespace CardGame {
	enum Kit {
			card
		};
	class Hand {
	public:
			Hand() = default;
			Hand(Card cards): cards_(cards)
			{}
			Hand GetCard()const;
		private:
			std::vector<Card> cards_;

		};
	};
#endif 