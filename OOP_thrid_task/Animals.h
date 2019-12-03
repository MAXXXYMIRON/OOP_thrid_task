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
	Animals(string name, float oldYear, string typeAnimal, string view, string typeFood);
	~Animals();

	//��� 
	string Name;
	//��� ���������
	string TypeAnimal;
	//���
	string View;
	//��� �������
	string TypeFood;

	float GetOldYear();
	void SetOldYear(float oldYear);

	//����� ���������
	virtual string Habitat() = 0;
	//����� ��������������
	virtual string GeneralCharacteristics() = 0;
	//����� �����
	virtual string LifeStyle() = 0;
	//��� �������
	virtual string TypeBreath() = 0;
	//��� �����������
	virtual string TypeBreeding() = 0;
};



enum ERRORS
{
	IncorrectNumberOldYear,//����������� ���-�� ���
	IncorrectLengthWorm,//������������ ����� �����
	IncorrectDepthHabitat,//������������ ������� ��������
	IncorrectSizesEchinoderms, //������������ ������ ����������
	IncorrectNumberRay //������������ ���-�� ����� ����������
};

