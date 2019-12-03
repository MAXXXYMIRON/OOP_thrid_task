#pragma once
#include "Animals.h"

//Молюски
class Mollusks : public Animals
{
public:
	Mollusks();
	Mollusks(string sink);
	Mollusks(string name, float oldYear, string typeAnimal, string view, string typeFood, string sink);
	~Mollusks();

	//Раковина
	string Sink;

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



