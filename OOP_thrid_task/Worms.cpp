#include "Worms.h"



Worms::Worms()
{
	Length = 1;
}

Worms::Worms(float length)
{
	SetLength(length);
}

Worms::Worms(string name, float oldYear, string typeAnimal, string view, string typeFood, float length) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	SetLength(length);
}

Worms::~Worms()
{
}


float Worms::GetLength()
{
	return Length;
}
void Worms::SetLength(float length)
{
	if (length <= 0) throw IncorrectLengthWorm;
	Length = length;
}

//Среда обиатания
string Worms::Habitat()
{
	return "Почва, пресные воды(в основном на дне водоемов) и моря";
}


//Общая характеристика
string Worms::GeneralCharacteristics()
{
	return "Двусторонне-симметричные животные: их тела имеют три основных клеточных слоя: эктодерму, мезодерму и энтодерму.";
}


//Образ жизни
string Worms::LifeStyle()
{
	return "Многие представители являются паразитами, кровососущими, есть активные и пассивные хищники, падальщики и фильтраторы.\nА также есть черви перерабатывающие почву.";
}


//Тип дыхания
string Worms::TypeBreath()
{
	return "Дыхательная система отсутствует.	";
}


//Тип размножения
string Worms::TypeBreeding()
{
	return "Раздельнополы, но иногда встречаются гермафродиты";
}
