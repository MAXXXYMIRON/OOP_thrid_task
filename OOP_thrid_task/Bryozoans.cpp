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


//Среда обиатания
string Bryozoans::Habitat()
{
	return "Pаспространены в пресных водоёмах и морях, где встречаются от полосы прилива до глубины 200—300 м (редко до 8200 м).";
}


//Общая характеристика
string Bryozoans::GeneralCharacteristics()
{
	return "Колония мшанок состоит из большого числа микроскопических модулей (зооидов),\n каждый из которых заключён в известковую, хитиноидную или студенистую ячейку (зооеций, цистид).";
}


//Образ жизни
string Bryozoans::LifeStyle()
{
	return "Ведут прикреплённый образ жизни.\n Покрывают своими колониями камни, растения, затонувшие корабли.";
}


//Тип дыхания
string Bryozoans::TypeBreath()
{
	return "Дыхание осуществляется через поверхность тела, особенно через щупальца.";
}


//Тип размножения
string Bryozoans::TypeBreeding()
{
	return "Размножение возможно половое и бесполое.";
}
