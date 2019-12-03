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
	Animals(string name, float oldYear, string typeAnimal, string view, string typeFood);
	~Animals();

	//Имя 
	string Name;
	//Тип животного
	string TypeAnimal;
	//Вид
	string View;
	//Тип питания
	string TypeFood;

	float GetOldYear();
	void SetOldYear(float oldYear);

	//Среда обиатания
	virtual string Habitat() = 0;
	//Общая характеристика
	virtual string GeneralCharacteristics() = 0;
	//Образ жизни
	virtual string LifeStyle() = 0;
	//Тип дыхания
	virtual string TypeBreath() = 0;
	//Тип размножения
	virtual string TypeBreeding() = 0;
};



enum ERRORS
{
	IncorrectNumberOldYear,//Некрректное кол-во лет
	IncorrectLengthWorm,//Некорректная длина червя
	IncorrectDepthHabitat,//Некорректная глубина обитания
	IncorrectSizesEchinoderms, //Некорректный размер иглокожого
	IncorrectNumberRay //Некорректное кол-во лучей иглокожого
};

