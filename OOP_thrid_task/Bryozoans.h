#pragma once
#include "Animals.h"

//Мшанки
class Bryozoans : public Animals
{
public:
	Bryozoans();
	~Bryozoans();
	
	//Тип зооидов
	virtual string TypeZooids() = 0;
};


//Глоторотые
class Swallowed : public Bryozoans
{
public:
	Swallowed();
	~Swallowed();
};


//Покрыторотые
class Angry : public Bryozoans
{
public:
	Angry();
	~Angry();
};


//Узкоротые
class Narrow : public Bryozoans
{
public:
	Narrow();
	~Narrow();
};

