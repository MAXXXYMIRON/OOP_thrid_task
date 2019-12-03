#include "Coelenterates.h"



Coelenterates::Coelenterates()
{
	TypeSymetry = "";
}

Coelenterates::Coelenterates(string typeSymetry)
{
	TypeSymetry = typeSymetry;
}

Coelenterates::Coelenterates(string name, float oldYear, string typeAnimal, string view, string typeFood, string typeSymetry) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	TypeSymetry = typeSymetry;
}

Coelenterates::~Coelenterates()
{
}


//����� ���������
string Coelenterates::Habitat()
{
	return "����������� ���������������� ������� � ����� � �������, ����� � ������� �������";
}


//����� ��������������
string Coelenterates::GeneralCharacteristics()
{
	return "����������� ������ ������������� �������� ���������� ��������� � ���� ����������� �������.\n ��� ���� ������ ���������, ��� ���� ���������������� ������������ �� ���� ������������� �������:\n���������� � �������������.\n ����� ����� ������ ������ ������������� ������������ �������������������� ��������� � ��������.";
}


//����� �����
string Coelenterates::LifeStyle()
{
	return "����� ������������� ����� �����. ������������� ������ �����������";
}


//��� �������
string Coelenterates::TypeBreath()
{
	return "������� �������������� ����� ��� ����������� ����.";
}


//��� �����������
string Coelenterates::TypeBreeding()
{
	return "������������ ���������������� �������� ����� - ����������� � �������, � ������������� ������� ������.";
}
