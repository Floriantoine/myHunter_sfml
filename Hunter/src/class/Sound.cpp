
#include "../../include/Sound.hpp"

Sound::Sound(std::string path)
{
    _soundBuffer.loadFromFile(path);
    _sound.setBuffer(_soundBuffer);
}
Sound::Sound(std::string path, float volume)
{
    _soundBuffer.loadFromFile(path);
    _sound.setBuffer(_soundBuffer);
    _sound.setVolume(volume);
}

Sound &Sound::operator=(const Sound &copy)
{
    _soundBuffer = copy._soundBuffer;
    _sound.setBuffer(_soundBuffer);
    _sound.setVolume(copy.getVolume());
    return *this;
}

void Sound::play()
{
    if (_sound.getStatus() != sf::SoundSource::Status::Playing) {
        _sound.play();
    }
}

void Sound::stop()
{
    _sound.stop();
}

void Sound::setVolume(float volume)
{
    _sound.setVolume(volume);
}

sf::Sound *Sound::getSound()
{
    return &_sound;
}

float Sound::getVolume() const
{
    return _sound.getVolume();
}

sf::SoundSource::Status Sound::getStatus() const
{
    return _sound.getStatus();
}

Sound::~Sound()
{
}
