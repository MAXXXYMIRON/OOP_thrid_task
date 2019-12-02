#pragma once
#include"Animals.h"


//Хордовые
class Chordate : Animals
{
public:
	Chordate();
	~Chordate();

	//Наличие хвоста
	bool Tail;
	//Жаберные щели
	bool Gills;
	//Тип покрытия
	string Skin;
	//Наличие скeлета
	bool Skeleton;

	//Водное
	bool Water;
	//Летающее
	bool Fly;
	//Наземное
	bool Ground;
	
	//Материк обитания
	string MainlandHabitat;
};

