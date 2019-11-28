#pragma once
#include "Animals.h"

//Губки
class Sponges : public Animals
{
public:
	Sponges();
	~Sponges();
	
	//Тип вод
	virtual string TypeOfWater() = 0;
	//Глубина вод
	virtual string WaterDepth() = 0;
	//Тип поверхности
	virtual string SurfaceType() = 0;
};


//Известковые губки
class LimeSponges : public Sponges
{
public:
	LimeSponges();
	~LimeSponges();
};


//Стеклянные губки
class GlassSponges : public Sponges
{
public:
	GlassSponges();
	~GlassSponges();
};


//Обыкновенные губки
class OrdinarySponges : public Sponges
{
public:
	OrdinarySponges();
	~OrdinarySponges();
};

