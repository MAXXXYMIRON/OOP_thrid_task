#include "Chordate.h"



Chordate::Chordate()
{
	Tail = true;
	Gills = false;
	Skin = "";
	Skeleton = true;
	Movement = "";
	MainlandHabitat = "";
}

Chordate::Chordate(bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat)
{
	Tail = tail;
	Gills = gills;
	Skin = skin;
	Skeleton = skeleton;
	Movement = movement;
	MainlandHabitat = mainlandHabitat;
}

Chordate::Chordate(string name, float oldYear, string typeAnimal, string view, string typeFood, bool tail, bool gills, string skin, bool skeleton, string movement, string mainlandHabitat) :
	Animals(name, oldYear, typeAnimal, view, typeFood)
{
	Tail = tail;
	Gills = gills;
	Skin = skin;
	Skeleton = skeleton;
	Movement = movement;
	MainlandHabitat = mainlandHabitat;
}

Chordate::~Chordate()
{
}

//Среда обиатания
string Chordate::Habitat()
{
	return "Весь мир(Моря, океаны, водоемы, озера, леса, пустыни, горы)";
}


//Общая характеристика
string Chordate::GeneralCharacteristics()
{
	return "Тип вторичноротых животных, для которых характерно наличие энтодермального осевого скелета в виде хорды, которая у высших форм заменяется позвоночником.";
}


//Образ жизни
string Chordate::LifeStyle()
{
	return "Ведут придонный образ жизни.";
}


//Тип дыхания
string Chordate::TypeBreath()
{
	return "У водных форм жабры.\nУ наземных форм жаберные щели имеются только у зародышей, у взрослых они развиваются в лёгкие.";
}


//Тип размножения
string Chordate::TypeBreeding()
{
	return "Размножение половое.";
}
