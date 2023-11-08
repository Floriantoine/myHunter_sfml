#pragma once

#include <SFML/Graphics.hpp>

class Cloud {
  public:
    sf::Sprite _sprite;
    sf::Texture _texture;
    int sp_pos;
    sf::Vector2f _pos;

    Cloud(sf::Vector2f pos, std::string texturePath);
    void display(sf::RenderWindow *window);
    void setPosition(sf::Vector2f pos);
    Cloud &operator=(const Cloud &copy);
    ~Cloud();
    Cloud(){};
};
