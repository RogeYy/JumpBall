#include "PhisicBody.h"


sf::Drawable* PhisicBody::GetSprite()
{
	return Sprite;
}

sf::Vector2f& PhisicBody::GetPosition()
{
	return Position;
}

float& PhisicBody::GetXSpeed()
{
	return XSpeed;
}

float& PhisicBody::GetYSpeed()
{
	return YSpeed;
}

float& PhisicBody::GetWeight()
{
	return weight;
}

float& PhisicBody::GetVolume()
{
	return volume;
}

void PhisicBody::SetSprite(sf::Drawable& newSprite)
{
	Sprite = &newSprite;
}

void PhisicBody::SetPosition(sf::Vector2f newPosition)
{
	Position = newPosition;
}

void PhisicBody::SetXSpeed(float newSpeed)
{
	XSpeed = newSpeed;
}

void PhisicBody::SetYSpeed(float newSpeed)
{
	YSpeed = newSpeed;
}

void PhisicBody::SetWeight(float newWeight)
{
	weight = newWeight;
}

void PhisicBody::SetVolume(float newVolume)
{
	volume = newVolume;
}

void PhisicBody::Gravity()
{
	YSpeed += g * metr;
}
