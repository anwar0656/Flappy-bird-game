#include <SFML/Graphics.hpp>
#include"global.h"
#include"game.h"

int main()
{
    sf::RenderWindow win(sf::VideoMode(WINT_WIDTH, WIN_HEIGHT), "Flappy Bird game");

Game game(win);
 game.startgameloop();
    return 0;
}
