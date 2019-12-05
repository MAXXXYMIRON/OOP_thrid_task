#include "Bryozoans.h"



Bryozoans::Bryozoans()
{
	TypeZooids = "";
	TypeGroupZooids = "";
}

Bryozoans::Bryozoans(string typeZooids, string typeGroupZooids)
{
	TypeZooids = typeZooids;
	TypeGroupZooids = typeGroupZooids;
}
Bryozoans::Bryozoans(string name, float oldYear, string typeAnimal, string view, string typeFood, string typeZooids, string typeGroupZooids) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	TypeZooids = typeZooids;
	TypeGroupZooids = typeGroupZooids;
}

Bryozoans::~Bryozoans()
{
}


//����� ���������
string Bryozoans::Habitat()
{
	return "P������������� � ������� ������� � �����, ��� ����������� �� ������ ������� �� ������� 200�300 � (����� �� 8200 �).";
}


//����� ��������������
string Bryozoans::GeneralCharacteristics()
{
	return "������� ������ ������� �� �������� ����� ���������������� ������� (�������),\n ������ �� ������� �������� � �����������, ����������� ��� ����������� ������ (�������, ������).";
}


//����� �����
string Bryozoans::LifeStyle()
{
	return "����� ������������ ����� �����.\n ��������� ������ ��������� �����, ��������, ���������� �������.";
}


//��� �������
string Bryozoans::TypeBreath()
{
	return "������� �������������� ����� ����������� ����, �������� ����� ��������.";
}


//��� �����������
string Bryozoans::TypeBreeding()
{
	return "����������� �������� ������� � ��������.";
}
