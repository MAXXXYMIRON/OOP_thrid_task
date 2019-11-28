#pragma once
#include "Animals.h"

//Черви
class Worms : public Animals
{
public:
	Worms();
	~Worms();
protected:
	//Длина
	float Length;
	virtual float GetLength();
	virtual void SetLength(float Len);
};


//Плоские черви
class FlatWorms : public Worms
{
public:
	FlatWorms();
	~FlatWorms();
};


//Круглые черви
class RoundWorms : public Worms
{
public:
	RoundWorms();
	~RoundWorms();
};


//Кольчатые черви
class Annelids : public Worms
{
public:
	Annelids();
	~Annelids();
};

