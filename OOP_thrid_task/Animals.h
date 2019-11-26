#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animals
{
public:
	Animals();
	~Animals();
	//Среда обиатания
	virtual string Habitat() = 0;
	//Общая характеристика
	virtual string GenerakCharacteristics() = 0;
	//Тип дыхания
	virtual string TypeBreath() = 0;
	//Тип размножения
	virtual string TypeBreeding() = 0;
};

