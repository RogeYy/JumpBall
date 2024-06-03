#pragma once
#include "SolidBody.h"

class Circle : public SolidBody
{
private:

	float radius;

public:

	float& GetRadius();

	void SetRadius(float newRadius);


	void BuildCircle(sf::Drawable* newBallSprite, sf::Vector2f newBallPosition, float newRadius);

};

