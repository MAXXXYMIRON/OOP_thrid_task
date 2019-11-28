#pragma once
#include "Animals.h"

//Членистоногие
class Arthropods : public Animals
{
public:
	Arthropods();
	~Arthropods();

	//Дыхательная система
	virtual string RespiratorySystem() = 0;
	//Структура тела
	virtual string BodyStructure() = 0;
};


//Насекомые
class Isects : public Arthropods
{
public:
	Isects();
	~Isects();
};


//Ракообразные
class Crustaceans : public Arthropods
{
public:
	Crustaceans();
	~Crustaceans();
};


//Паукообразные
class Arachnids : public Arthropods
{
public:
	Arachnids();
	~Arachnids();
};

