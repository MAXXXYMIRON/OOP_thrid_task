#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animals
{
	//���� �����
	float OldYear;
public:
	Animals();
	~Animals();

	//��� 
	string Name;
	//��� ���������
	string TypeAnimal;
	//���
	string View;
	//��� �������
	string TypeFood;

	string GetOldYear();
	void SetOldYear(string oldYear);

	//����� ���������
	virtual string Habitat() = 0;
	//����� ��������������
	virtual string GenerakCharacteristics() = 0;
	//����� �����
	virtual string LifeStyle() = 0;
	//��� �������
	virtual string TypeBreath() = 0;
	//��� �����������
	virtual string TypeBreeding() = 0;
};

enum ERRORS
{

};

