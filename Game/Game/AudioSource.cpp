#include "AudioSource.h"

using namespace JE;

AudioSource::AudioSource(std::string _pathToAudio, GameObject& gameObject) : Component(gameObject) {
	soundBuffer.loadFromFile(_pathToAudio);
	float length = soundBuffer.getDuration().asSeconds();

	if (length > 30.0f) {
		isMusic = true;
		music.openFromFile(_pathToAudio);
	}
	else {
		sound.setBuffer(soundBuffer);
	}
}

AudioSource::~AudioSource() {

}

void AudioSource::Play() {
	if (isMusic) {
		music.play();
	}
	else {
		sound.play();
	}
}

void AudioSource::Pause() {
	if (isMusic) {
		music.pause();
	}
	else {
		sound.pause();
	}
}

void AudioSource::Stop() {
	if (isMusic) {
		music.stop();
	}
	else {
		sound.stop();
	}
}
