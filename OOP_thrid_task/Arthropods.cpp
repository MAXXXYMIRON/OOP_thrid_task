#include "Arthropods.h"



Arthropods::Arthropods()
{
	RespiratorySystem = "";
	BodyStructure = "";
}


Arthropods::Arthropods(string respiratorySystem, string bodyStructure)
{
	RespiratorySystem = respiratorySystem;
	BodyStructure = bodyStructure;
}
Arthropods::Arthropods(string name, float oldYear, string typeAnimal, string view, string typeFood, string respiratorySystem, string bodyStructure) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	RespiratorySystem = respiratorySystem;
	BodyStructure = bodyStructure;
}

Arthropods::~Arthropods()
{
}


//����� ���������
string Arthropods::Habitat()
{
	return "������������� ������� � �������, ������������, �������� � ��������� �����������";
}


//����� ��������������
string Arthropods::GeneralCharacteristics()
{
	return "��� ������������� ��������, ���������� ���������, ������������, ������������� � ����������.\n� �������������� ����� ���� ��������� 2/3 ���� ����� ����� ������� �� �����.";
}


//����� �����
string Arthropods::LifeStyle()
{
	return "����� ��������� ����� �����";
}


//��� �������
string Arthropods::TypeBreath()
{
	return "� ������ ������������� - �����, � ���������� � ��������� ������ ������������� �������� ������� ������ ������ � ������.";
}


//��� �����������
string Arthropods::TypeBreeding()
{
	return "����������� � ������������� ������ �������.";
}
