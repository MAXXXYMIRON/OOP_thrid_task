#pragma once
#include "Animals.h"

//Членистоногие
class Arthropods : public Animals
{
public:
	Arthropods();
	Arthropods(string respiratorySystem, string bodyStructure);
	Arthropods(string name, float oldYear, string typeAnimal, string view, string typeFood, string respiratorySystem, string bodyStructure);
	~Arthropods();

	//Дыхательная система
	string RespiratorySystem;
	//Структура тела
	string BodyStructure;

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


