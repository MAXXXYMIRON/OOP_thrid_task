#pragma once
#include "Animals.h"

//Мшанки
class Bryozoans : public Animals
{
public:
	Bryozoans();
	Bryozoans(string typeZooids, string typeGroupZooids);
	Bryozoans(string name, float oldYear, string typeAnimal, string view, string typeFood, string typeZooids, string typeGroupZooids);
	~Bryozoans();
	
	//Тип зооидов
	string TypeZooids;
	//Тип группы зооидов
	string TypeGroupZooids;

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


