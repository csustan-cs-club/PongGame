// PongGame2.cpp : Defines the entry point for the console application.
// It is important to read the readme.md to setup everything or else none of the code will work.

#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	float p1y = 540, p2y = 540, ballx = 960, bally = 540;
	float ballSpeedx = 1, ballSpeedy = 1;

	VideoMode vm(1920, 1080);

	RenderWindow window(vm, "Pong!!!!!", Style::Fullscreen);

	Texture background;
	background.loadFromFile("sprites/background.png");
	Sprite backgroundSprite;
	backgroundSprite.setTexture(background);
	backgroundSprite.setPosition(0, 0);

	Texture Paddle1;
	Paddle1.loadFromFile("sprites/paddle1.png");
	Sprite paddleSprite;
	paddleSprite.setTexture(Paddle1);
	paddleSprite.setPosition(50, p1y);

	Texture Paddle2;
	Paddle2.loadFromFile("sprites/paddle2.png");
	Sprite paddleSprite2;
	paddleSprite2.setTexture(Paddle2);
	paddleSprite2.setPosition(1870, p2y);

	Texture ball;
	ball.loadFromFile("sprites/ball.png");
	Sprite ballSprite;
	ballSprite.setTexture(ball);
	ballSprite.setPosition(ballx, bally);

	while (window.isOpen())
	{
		ballSprite.setPosition(ballx += ballSpeedx, bally += ballSpeedy);

		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::W))
		{
			paddleSprite.setPosition(50, p1y -= 1);
		}
		if (Keyboard::isKeyPressed(Keyboard::S))
		{
			paddleSprite.setPosition(50, p1y += 1);
		}

		if (Keyboard::isKeyPressed(Keyboard::I))
		{
			paddleSprite2.setPosition(1870, p2y -= 1);
		}
		if (Keyboard::isKeyPressed(Keyboard::K))
		{
			paddleSprite2.setPosition(1870, p2y += 1);
		}

		if (ballx < 0 || ballx > 1920)
		{
			ballSpeedx *= -1;
		}
		if (bally < 0 || bally > 1080)
		{
			ballSpeedy *= -1;
		}

		FloatRect pad1(50, p1y, 25, 100);
		FloatRect pad2(1870, p2y, 25, 100);
		FloatRect b(ballx, bally, 25, 25);

		if (pad1.intersects(b) || pad2.intersects(b))
		{
			ballSpeedx *= -1;
			ballSpeedy *= -1;
		}


		window.clear();

		window.draw(backgroundSprite);
		window.draw(paddleSprite);
		window.draw(paddleSprite2);
		window.draw(ballSprite);

		window.display();
	}

    return 0;
}

