#include "../../include/Cloud.hpp"

void Cloud::setPosition(sf::Vector2f pos)
{
    _pos = pos;
    _sprite.setPosition(_pos);
}

void Cloud::display(sf::RenderWindow *window)
{
    window->draw(_sprite);
}

Cloud::~Cloud()
{
}

Cloud &Cloud::operator=(const Cloud &copy)
{
    this->_pos = copy._pos;
    this->sp_pos = copy.sp_pos;
    this->_sprite = copy._sprite;
    this->_texture = copy._texture;
    this->_sprite.setTexture(_texture);
    return *this;
}

Cloud::Cloud(sf::Vector2f pos, std::string texturePath) : _pos(pos), sp_pos(0)
{
    if (_texture.loadFromFile(texturePath)) {
        _sprite.setTexture(_texture, true);
        _sprite.setPosition(_pos);
    }
};
