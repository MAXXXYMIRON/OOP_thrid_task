#pragma once
#include "Animals.h"

//Иглокожие
class Echinoderms : Animals
{
	//Кол-во лучей
	float NumberRay;
	//Размеры
	float Sizes;


public:
	Echinoderms();
	~Echinoderms();

	//Тип лучей
	string TypeOfRay;

	void SetNumberRay(float numberRay);
	float GetNumberRay();

	void SetSizes(float sizes);
	float GetSizes();
};

