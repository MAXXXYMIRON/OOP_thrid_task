#pragma once
#include "Animals.h"

//Членистоногие
class Arthropods : public Animals
{
public:
	Arthropods();
	~Arthropods();

	//Дыхательная система
	string RespiratorySystem;
	//Структура тела
	string BodyStructure;
};


