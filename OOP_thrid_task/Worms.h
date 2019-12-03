#pragma once
#include "Animals.h"

//Черви
class Worms : public Animals
{
	//Длина
	float Length;
public:
	Worms();
	Worms(float length);
	Worms(string name, float oldYear, string typeAnimal, string view, string typeFood, float length);
	~Worms();

	float GetLength();
	void SetLength(float length);

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


