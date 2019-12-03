#pragma once
#include "Animals.h"

//Иглокожие
class Echinoderms : public Animals
{
	//Кол-во лучей
	float NumberRay;
	//Размеры
	float Sizes;
public:
	Echinoderms();
	Echinoderms(float numberRay, float sizes, string typeOfRay);
	Echinoderms(string name, float oldYear, string typeAnimal, string view, string typeFood, float numberRay, float sizes, string typeOfRay);
	~Echinoderms();

	//Тип лучей
	string TypeOfRay;

	void SetNumberRay(float numberRay);
	float GetNumberRay();

	void SetSizes(float sizes);
	float GetSizes();

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

