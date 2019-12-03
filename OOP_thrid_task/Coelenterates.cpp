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


//Среда обиатания
string Coelenterates::Habitat()
{
	return "Большинство кишечнополостных обитает в морях и океанах, редко в пресных водоёмах";
}


//Общая характеристика
string Coelenterates::GeneralCharacteristics()
{
	return "Традиционно группу характеризуют наличием радиальной симметрии и двух зародышевых листков.\n При этом обычно считается, что тело кишечнополостных складывается из двух эпителиальных пластов:\nэпидермиса и гастродермиса.\n Между двумя слоями клеток располагается желеобразная соединительнотканная прослойка — мезоглея.";
}


//Образ жизни
string Coelenterates::LifeStyle()
{
	return "Ведут малоподвижный образ жизни. Передвигаются весьма своеобразно";
}


//Тип дыхания
string Coelenterates::TypeBreath()
{
	return "Дыхание осуществляются через всю поверхность тела.";
}


//Тип размножения
string Coelenterates::TypeBreeding()
{
	return "Размножаются кишечнополостные бесполым путем - почкованием и половым, с формированием половых клеток.";
}
