#include "food.h"

Food::Food(Wall& tmpWall):wall(tmpWall)
{
}

void Food::setFood()
{
	while (true) 
	{
		foodX = rand() % (Wall::ROW - 2) + 1;
		foodY = rand() % (Wall::COLUMN - 2) + 1;
		if (wall.getWall(foodX, foodY) == ' ')
		{
			wall.setWall(foodX, foodY, '#');
			break;
		}
	
	}
	
	
}
