#include"game.h"
#include"global.h"
Game::Game(sf::RenderWindow& window): win(window){
    bg_texture.loadFromFile("assets/bg.png");
    bg_sprite.setTexture(bg_texture);
    bg_sprite.setScale(SCALE_FACTOR,SCALE_FACTOR);
    bg_sprite.setPosition(0.f,-250.f);
    ground_texture.loadFromFile("assets/ground.png");
    ground_sprite1.setTexture(ground_texture);
    ground_sprite2.setTexture(ground_texture);

    ground_sprite1.setScale(SCALE_FACTOR,SCALE_FACTOR);
    ground_sprite2.setScale(SCALE_FACTOR,SCALE_FACTOR);
    ground_sprite1.setPosition(0,620);
    ground_sprite2.setPosition(ground_sprite1.getGlobalBounds().width,620);
}

//game loop
void Game::startgameloop(){
    while(win.isOpen()){
        sf::Event event;
        // event loop
        while(win.pollEvent(event)){
            if(event.type==sf::Event::Closed){
                win.close();
            }
        }
        draw();
        // window displaying 
        win.display();
    }
}

void Game::draw(){
    win.draw(bg_sprite);
    win.draw(ground_sprite1);
    win.draw(ground_sprite2);
}