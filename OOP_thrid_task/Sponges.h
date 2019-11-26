#pragma once
#include "Animals.h"

//Губки
class Sponges : Animals
{
public:
	Sponges();
	~Sponges();
	
	//Тип вод
	virtual string TypeOfWater() = 0;
	//Глубина вод
	virtual string WaterDepth() = 0;
	//Тип поверхности
	virtual string SurfaceType() = 0;
};

