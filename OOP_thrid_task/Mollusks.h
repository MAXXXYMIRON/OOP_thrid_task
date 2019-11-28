#pragma once
#include "Animals.h"

//Молюски
class Mollusks : public Animals
{
public:
	Mollusks();
	~Mollusks();

	//Раковина
	virtual string Sink() = 0;
};


//Двустворчатые
class Bivalve : public Mollusks
{
public:
	Bivalve();
	~Bivalve();
};


//Брюхоногие
class Gastropods : public Mollusks
{
public:
	Gastropods();
	~Gastropods();
};


//Головоногие
class Cephalopods : public Mollusks
{
public:
	Cephalopods();
	~Cephalopods();
};


