#pragma once
#include "Animals.h"

//�������������
class Arthropods : public Animals
{
public:
	Arthropods();
	~Arthropods();

	//����������� �������
	virtual string RespiratorySystem() = 0;
	//��������� ����
	virtual string BodyStructure() = 0;
};


//���������
class Isects : public Arthropods
{
public:
	Isects();
	~Isects();
};


//������������
class Crustaceans : public Arthropods
{
public:
	Crustaceans();
	~Crustaceans();
};


//�������������
class Arachnids : public Arthropods
{
public:
	Arachnids();
	~Arachnids();
};

