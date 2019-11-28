#pragma once
#include "Animals.h"

//Кишечнополосатые
class Coelenterates : public Animals
{
public:
	Coelenterates();
	~Coelenterates();
	//Тип симметрии
	virtual string TypeSymmetry() = 0;
};


//Гребневеки
class Combs : public Coelenterates
{
public:
	Combs();
	~Combs();
};


//Стрекающие
class Streaking : public Coelenterates
{
public:
	Streaking();
	~Streaking();
};


//Трилобозои
class Trilobozoans : public Coelenterates
{
public:
	Trilobozoans();
	~Trilobozoans();
};

