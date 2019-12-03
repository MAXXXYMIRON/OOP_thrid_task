#pragma once
#include "Animals.h"

//Кишечнополосатые
class Coelenterates : public Animals
{
public:
	Coelenterates();
	Coelenterates(string typeSymetry);
	Coelenterates(string name, float oldYear, string typeAnimal, string view, string typeFood, string typeSymetry);
	~Coelenterates();

	//Тип симметрии
	string TypeSymetry;

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


