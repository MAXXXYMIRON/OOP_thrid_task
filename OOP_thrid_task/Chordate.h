#pragma once
#include"Animals.h"


//��������
class Chordate : Animals
{
public:
	Chordate();
	~Chordate();

	//������� ������
	bool Tail;
	//�������� ����
	bool Gills;
	//��� ��������
	string Skin;
	//������� ��e����
	bool Skeleton;

	//������
	bool Water;
	//��������
	bool Fly;
	//��������
	bool Ground;
	
	//������� ��������
	string MainlandHabitat;
};

