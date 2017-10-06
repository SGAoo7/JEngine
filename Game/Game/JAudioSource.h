#pragma once

#include <iostream>
#include <SFML\Audio.hpp>

#include "Component.h"

class JAudioSource : public Component
{
public:
	JAudioSource(std::string _pathToAudio);
	~JAudioSource();

	void Play();
	void Pause();
	void Stop();

private:
	sf::Music music;
	sf::Sound sound;
	sf::SoundBuffer soundBuffer;

	bool isMusic = false;
};

