#pragma once
#include "Animals.h"

//�����
class Worms : public Animals
{
public:
	Worms();
	~Worms();
protected:
	//�����
	float Length;
	virtual float GetLength();
	virtual void SetLength(float Len);
};


//������� �����
class FlatWorms : public Worms
{
public:
	FlatWorms();
	~FlatWorms();
};


//������� �����
class RoundWorms : public Worms
{
public:
	RoundWorms();
	~RoundWorms();
};


//��������� �����
class Annelids : public Worms
{
public:
	Annelids();
	~Annelids();
};

