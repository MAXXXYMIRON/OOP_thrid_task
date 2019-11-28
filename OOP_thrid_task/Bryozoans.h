#pragma once
#include "Animals.h"

//������
class Bryozoans : public Animals
{
public:
	Bryozoans();
	~Bryozoans();
	
	//��� �������
	virtual string TypeZooids() = 0;
};


//����������
class Swallowed : public Bryozoans
{
public:
	Swallowed();
	~Swallowed();
};


//������������
class Angry : public Bryozoans
{
public:
	Angry();
	~Angry();
};


//���������
class Narrow : public Bryozoans
{
public:
	Narrow();
	~Narrow();
};

