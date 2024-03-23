
#include "raylib.h"

#include "include/Body.h"

namespace Minator
{
	void Body::updatePosition(float time)
	{
		x += (vx * time);
		y += (vy * time);
	}

	void Body::addForce(float xComponent, float yComponent, std::string lable)
	{

	}

	void Body::addImpulse(float xComponent, float yComponent, std::string lable)
	{

	}
	
	void Body::drawBody()
	{
		// for now consider all bodies as sphere
		// TODO: Write a wrapper class for raylib
		DrawCircle(x, y, radius, MAROON);
	}
}