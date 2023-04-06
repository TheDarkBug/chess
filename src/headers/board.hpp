#ifndef _BOARD_HPP_
#define _BOARD_HPP_
#include "square.hpp"
#include <SFML/Graphics.hpp>

class Board {
public:
	Board() : Board(100) {}
	Board(float);
	~Board(){};
	void setupTeam(bool);
	void draw(sf::RenderWindow&) const;
	const Square& getSquare(unsigned int x, unsigned int y) const { return squares[x][y]; }
	Square& getSquareHandle(unsigned int x, unsigned int y) { return squares[x][y]; }
	friend std::ostream& operator<<(std::ostream& os, const Board& b);

private:
	Square squares[8][8];
};

#endif // _BOARD_HPP_