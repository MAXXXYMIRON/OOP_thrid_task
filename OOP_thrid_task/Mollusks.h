#pragma once
#include "Animals.h"

//�������
class Mollusks : public Animals
{
public:
	Mollusks();
	~Mollusks();

	//��������
	virtual string Sink() = 0;
};


//�������������
class Bivalve : public Mollusks
{
public:
	Bivalve();
	~Bivalve();
};


//����������
class Gastropods : public Mollusks
{
public:
	Gastropods();
	~Gastropods();
};


//�����������
class Cephalopods : public Mollusks
{
public:
	Cephalopods();
	~Cephalopods();
};


