#pragma once

#include <iostream>
#include <SFML\Audio.hpp>

#include "GameObject.h"

namespace JE {
	class AudioSource : public Component {
	public:
		AudioSource(std::string _pathToAudio, GameObject& gameObject);
		~AudioSource();

		void Play();
		void Pause();
		void Stop();

	private:
		sf::Music music;
		sf::Sound sound;
		sf::SoundBuffer soundBuffer;

		bool isMusic = false;
	};
}
