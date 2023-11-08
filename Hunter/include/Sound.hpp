#pragma once

#include <SFML/Audio.hpp>

class Sound {
  private:
    sf::Sound _sound;
    sf::SoundBuffer _soundBuffer;

  public:
    Sound(std::string path);
    Sound(std::string path, float volume);
    void setVolume(float volume);
    void play();
    void stop();
    sf::Sound *getSound();
    float getVolume() const;
    sf::SoundSource::Status getStatus() const;
    Sound &operator=(const Sound &copy);
    Sound(){};
    ~Sound();
};
