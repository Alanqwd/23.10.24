#pragma once
#ifndef CARD_HPP
#define CARD_HPP

namespace CardGame {
	enum Suit {
		clubs,
		diamonds,
		hards,
		spikes
	};

	enum Value {
		two = 2,
		three,
		four,
		five,
		six,
		seven,
		eigth,
		nine,
		ten,
		jack,
		queen,
		king,
		ace
	};
	class Card {
		Card() = default;
		Card(Value value, Suit suit)
			:value_(value),
			suit_(suit)
		{}

		Suit GetSuit()const;
		Value GetValue()const;
	private:
		Value value_;
		Suit suit_;

	};


}



#endif // !CARD_HPP
