#include "Circle.h"

float& Circle::GetRadius()
{
	return radius;
}

void Circle::SetRadius(float newRadius)
{
	radius = newRadius;
}

void Circle::BuildCircle(sf::Drawable* newBallSprite, sf::Vector2f newBallPosition, float newRadius)
{
	SetSprite(*newBallSprite);
	SetPosition(newBallPosition);
	SetRadius(newRadius);
	GetVolume() = radius * radius * pi;
}
