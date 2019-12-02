#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animals
{
	//Срок жизни
	float OldYear;
public:
	Animals();
	~Animals();

	//Имя 
	string Name;
	//Тип животного
	string TypeAnimal;
	//Вид
	string View;
	//Тип питания
	string TypeFood;

	string GetOldYear();
	void SetOldYear(string oldYear);

	//Среда обиатания
	virtual string Habitat() = 0;
	//Общая характеристика
	virtual string GenerakCharacteristics() = 0;
	//Образ жизни
	virtual string LifeStyle() = 0;
	//Тип дыхания
	virtual string TypeBreath() = 0;
	//Тип размножения
	virtual string TypeBreeding() = 0;
};

enum ERRORS
{

};

