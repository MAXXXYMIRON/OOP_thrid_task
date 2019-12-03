#pragma once
#include "Animals.h"

//Губки
class Sponges : public Animals
{
	//Глубина
	float WaterDepth;
public:
	Sponges();
	Sponges(float waterDepth, string typeOfWater, string surfaceType);
	Sponges(string name, float oldYear, string typeAnimal, string view, string typeFood, float waterDepth, string typeOfWater, string surfaceType);
	~Sponges();
	
	//Тип вод
	string TypeOfWater;

	//Глубина вод
	void SetWaterDepth(float waterDepth);
	//Глубина вод
	float GetWaterDepth();

	//Тип поверхности
	string SurfaceType;

	//Среда обиатания
	string Habitat() override;
	//Общая характеристика
	string GeneralCharacteristics() override;
	//Образ жизни
	string LifeStyle() override;
	//Тип дыхания
	string TypeBreath() override;
	//Тип размножения
	string TypeBreeding() override;
};

