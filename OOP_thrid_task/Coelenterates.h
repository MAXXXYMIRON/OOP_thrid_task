#pragma once
#include "Animals.h"

//����������������
class Coelenterates : public Animals
{
public:
	Coelenterates();
	~Coelenterates();
	//��� ���������
	virtual string TypeSymmetry() = 0;
};


//����������
class Combs : public Coelenterates
{
public:
	Combs();
	~Combs();
};


//����������
class Streaking : public Coelenterates
{
public:
	Streaking();
	~Streaking();
};


//����������
class Trilobozoans : public Coelenterates
{
public:
	Trilobozoans();
	~Trilobozoans();
};

