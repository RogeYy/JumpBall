// JumpBall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <SFML/Graphics.hpp>
#include "PhisicBody.h"
#include "Circle.h"



int main()
{

	////main window 
	sf::RenderWindow window(sf::VideoMode(), "window", sf::Style::Fullscreen);
	window.setKeyRepeatEnabled(false);

	sf::Keyboard keyboard;

	sf::Clock WorldClock;

	sf::RectangleShape fon(sf::Vector2f(1920, 1080));
	fon.setFillColor(sf::Color::Black);

	///ball info:

	//ball radius
	float radius = 25.0f;
	//number of vertices
	size_t pointCount = 16;
	//start ball position
	sf::Vector2f BallPosition(window.getSize().x / 2 - radius, window.getSize().y / 2 - radius);

	sf::CircleShape BallSprite(radius, pointCount);
	BallSprite.setPosition(BallPosition);

	Circle Ball;
	Ball.SetSprite(BallSprite);
	Ball.SetPosition(BallPosition);
	Ball.SetRadius(radius);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed)
				window.close();
		if (keyboard.isKeyPressed(sf::Keyboard::Escape)) window.close();

		if (keyboard.isKeyPressed(sf::Keyboard::F5))
		{
			Ball.SetPosition(BallPosition);
			int start = -200, end = 200;
			Ball.SetXSpeed((rand() % (end - start + 1) + start) / 100.f);
			Ball.SetYSpeed((rand() % (end - start + 1) + start) / 100.f);
		}

		sf::Time WorldTimmer = WorldClock.getElapsedTime();

		//gravity power on ball
		if (WorldTimmer.asMicroseconds() % 1 == 0.0f)
		{
			//std::cout << WorldTimmer.asSeconds() * 100000 << "\n";
			Ball.Gravity();

			Ball.SetPosition(Ball.GetPosition() + sf::Vector2f(Ball.GetXSpeed(), Ball.GetYSpeed()));
			BallSprite.setPosition(Ball.GetPosition());


			if (Ball.GetPosition().y >= window.getSize().y - 2 * radius)
			{
				Ball.SetPosition(sf::Vector2f(Ball.GetPosition().x, window.getSize().y - 2 * radius));
				Ball.GetYSpeed() = -Ball.GetYSpeed() * k;
				Ball.GetXSpeed() *= k;
				//-(Ball.GetYSpeed() - Ball.GetYSpeed() / 2)
			}
			if (Ball.GetPosition().y <= 0)
			{
				Ball.SetPosition(sf::Vector2f(Ball.GetPosition().x, 0));
				Ball.GetYSpeed() = -Ball.GetYSpeed();
			}
			if (Ball.GetPosition().x >= window.getSize().x - 2 * radius)
			{
				Ball.SetPosition(sf::Vector2f(window.getSize().x - 2 * radius, Ball.GetPosition().y));
				Ball.GetXSpeed() = -Ball.GetXSpeed() * k;
			}
			if (Ball.GetPosition().x <= 0)
			{
				Ball.SetPosition(sf::Vector2f(0, Ball.GetPosition().y));
				Ball.GetXSpeed() = -Ball.GetXSpeed() * k;
			}

			//WorldClock.restart();
		}



		window.clear();
		window.draw(fon);
		window.draw(*Ball.GetSprite());
		window.display();

	}
}