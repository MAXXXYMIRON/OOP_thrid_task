#include "Sponges.h"



Sponges::Sponges()
{
	TypeOfWater = "";
	WaterDepth = 1000;
	SurfaceType = "";
}

Sponges::Sponges(float waterDepth, string typeOfWater, string surfaceType)
{
	TypeOfWater = typeOfWater;
	SetWaterDepth(waterDepth);
	SurfaceType = surfaceType;
}

Sponges::Sponges(string name, float oldYear, string typeAnimal, string view, string typeFood, float waterDepth, string typeOfWater, string surfaceType) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	TypeOfWater = typeOfWater;
	SetWaterDepth(waterDepth);
	SurfaceType = surfaceType;
}

Sponges::~Sponges()
{
}


//Глубина вод
void Sponges::SetWaterDepth(float waterDepth)
{
	if (waterDepth <= 0) throw IncorrectDepthHabitat;
	WaterDepth = waterDepth;
}
//Глубина вод
float Sponges::GetWaterDepth()
{
	return WaterDepth;
}


//Среда обиатания
string Sponges::Habitat()
{
	return "Распространены по всему земному шару от прибрежной зоны и до почти максимальных глубин океана.";
}


//Общая характеристика
string Sponges::GeneralCharacteristics()
{
	return "Губки не имеют настоящих тканей и органов, и различные функции выполняют разнообразные отдельные клетки и клеточные пласты.\n Обладают высокой способностью к регенерации.\nМногие губки, а также населяющие их микроорганизмы вырабатывают биологически активные вещества, используемые в медицине.";
}


//Образ жизни
string Sponges::LifeStyle()
{
	return "Ведут прикреплённый образ жизни.";
}


//Тип дыхания
string Sponges::TypeBreath()
{
	return "Органы дыхания отсутствуют, и газообмен осуществляется только посредством диффузного дыхания (через поверхность тела)";
}


//Тип размножения
string Sponges::TypeBreeding()
{
	return "Размножаются половым и бесполым путями (в том числе с образованием покоящихся почек — геммул).";
}
