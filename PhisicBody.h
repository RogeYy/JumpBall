#pragma once
#include <SFML/Graphics.hpp>
#include "WorldConst.h"



class PhisicBody
{
private:

	sf::Vector2f Position;
	
	sf::Drawable* Sprite;

	float XSpeed = -0.5f, YSpeed = -0.25f, weight = 1.0f, volume = 1.0f, MechanicEnergy;

public:

	sf::Drawable* GetSprite();

	sf::Vector2f& GetPosition();

	float& GetXSpeed();

	float& GetYSpeed();

	float& GetWeight();

	float& GetVolume();

	void SetSprite(sf::Drawable &newSprite);

	void SetPosition(sf::Vector2f newPosition);

	void SetXSpeed(float newSpeed);

	void SetYSpeed(float newSpeed);

	void SetWeight(float newWeight);

	void SetVolume(float newVolume);

	void Gravity();

};

