#include "Mollusks.h"



Mollusks::Mollusks()
{
	Sink = "";
}

Mollusks::Mollusks(string sink)
{
	Sink = sink;
}
Mollusks::Mollusks(string name, float oldYear, string typeAnimal, string view, string typeFood, string sink) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	Sink = sink;
}

Mollusks::~Mollusks()
{
}


//����� ���������
string Mollusks::Habitat()
{
	return "�������� �������������� �� ����� ������� ���� � ����������� ��� �� ����, ��� � � ����� � �������(�������� � ���������� ����)";
}


//����� ��������������
string Mollusks::GeneralCharacteristics()
{
	return "�������� ������ ���������������� ��������� ����� ������� ���������� ����������� � ������������� ���������.";
}


//����� �����
string Mollusks::LifeStyle()
{
	return "�������� � �������������� � ������������� ������ ��������, � �� ������ ����� ����� ������ �����������";
}


//��� �������
string Mollusks::TypeBreath()
{
	return "����������� ������� ������������ ��������� ��������� ����������� ������� � ����������.";
}


//��� �����������
string Mollusks::TypeBreeding()
{
	return "�������� ����� ���� ��� ��������������, ��� � ���������������.";
}
