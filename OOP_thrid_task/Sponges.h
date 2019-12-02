#pragma once
#include "Animals.h"

//Губки
class Sponges : public Animals
{
	//Глубина
	float WaterDepth;
public:
	Sponges();
	~Sponges();
	
	//Тип вод
	string TypeOfWater;

	//Глубина вод
	void SetWaterDepth(float waterDepth);
	//Глубина вод
	float GetWaterDepth();

	//Тип поверхности
	string SurfaceType;
};

