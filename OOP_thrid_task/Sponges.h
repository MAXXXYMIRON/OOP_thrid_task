#pragma once
#include "Animals.h"

//�����
class Sponges : public Animals
{
public:
	Sponges();
	~Sponges();
	
	//��� ���
	virtual string TypeOfWater() = 0;
	//������� ���
	virtual string WaterDepth() = 0;
	//��� �����������
	virtual string SurfaceType() = 0;
};


//����������� �����
class LimeSponges : public Sponges
{
public:
	LimeSponges();
	~LimeSponges();
};


//���������� �����
class GlassSponges : public Sponges
{
public:
	GlassSponges();
	~GlassSponges();
};


//������������ �����
class OrdinarySponges : public Sponges
{
public:
	OrdinarySponges();
	~OrdinarySponges();
};

