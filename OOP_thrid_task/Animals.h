#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animals
{
public:
	Animals();
	~Animals();
	//����� ���������
	virtual string Habitat() = 0;
	//����� ��������������
	virtual string GenerakCharacteristics() = 0;
	//��� �������
	virtual string TypeBreath() = 0;
	//��� �����������
	virtual string TypeBreeding() = 0;
};

