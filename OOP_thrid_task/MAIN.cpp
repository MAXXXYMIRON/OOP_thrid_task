#include "Animals.h"

#include "Worms.h"
#include "Coelenterates.h"
#include "Sponges.h"
#include "Bryozoans.h"
#include "Arthropods.h"
#include "Mollusks.h"
#include "Echinoderms.h"
#include "Chordate.h"


void main()
{
	setlocale(0, "");

	try
	{
		Worms EarthWorm = Worms("Дождевой червь", 0.5, "Беспозвоночные", "Кольчатые черви", "Питаются разлагающейся органикой", 10);
		cout << EarthWorm.Name << endl;
		cout << EarthWorm.GetOldYear() << " лет" << endl;
		cout << EarthWorm.TypeAnimal << endl;
		cout << EarthWorm.View << endl;
		cout << EarthWorm.TypeFood << endl;
		cout << EarthWorm.Habitat() << endl;
		cout << EarthWorm.GeneralCharacteristics() << endl;
		cout << EarthWorm.LifeStyle() << endl;
		cout << EarthWorm.TypeBreath() << endl;
		cout << EarthWorm.TypeBreeding() << endl;
		cout << EarthWorm.GetLength() << "см" << endl;
		cout << endl << endl;

		Coelenterates JellyFish = Coelenterates("Кубомедуза", 100, "Многоклеточные", "Стрекающие", "Питаются водрослями и планктоном", "Имеют радиальную симетрию");
		cout << JellyFish.Name << endl;
		cout << JellyFish.GetOldYear() << " лет" << endl;
		cout << JellyFish.TypeAnimal << endl;
		cout << JellyFish.View << endl;
		cout << JellyFish.TypeFood << endl;
		cout << JellyFish.Habitat() << endl;
		cout << JellyFish.GeneralCharacteristics() << endl;
		cout << JellyFish.LifeStyle() << endl;
		cout << JellyFish.TypeBreath() << endl;
		cout << JellyFish.TypeBreeding() << endl;
		cout << JellyFish.TypeSymetry << endl;
		cout << endl << endl;

		Sponges BasketOfVenus = Sponges("Корзинка Венеры", 420000000, "Беспозвоночные", "Шестилучевая губка", "Питаются водрослями и планктоном", 450, "Морской", "Шельфовая зона материков и островов");
		cout << BasketOfVenus.Name << endl;
		cout << BasketOfVenus.GetOldYear() << " лет" << endl;
		cout << BasketOfVenus.TypeAnimal << endl;
		cout << BasketOfVenus.View << endl;
		cout << BasketOfVenus.TypeFood << endl;
		cout << BasketOfVenus.Habitat() << endl;
		cout << BasketOfVenus.GeneralCharacteristics() << endl;
		cout << BasketOfVenus.LifeStyle() << endl;
		cout << BasketOfVenus.TypeBreath() << endl;
		cout << BasketOfVenus.TypeBreeding() << endl;
		cout << BasketOfVenus.TypeOfWater << " - тип вод" << endl;
		cout << BasketOfVenus.SurfaceType << " - тип поверхности обитания" << endl;
		cout << BasketOfVenus.GetWaterDepth() << "м - глубина обитания" << endl;
		cout << endl << endl;

		Bryozoans Plumatella = Bryozoans("Плюматела", 100000, "Беспозвоночные", "Покрыторотые", "Едят мелкий планктон и детрит", "Коркообразные либо ветвеобразные группы зооидов", "Колонии зоодов в общем студне");
		cout << Plumatella.Name << endl;
		cout << Plumatella.GetOldYear() << " лет" << endl;
		cout << Plumatella.TypeAnimal << endl;
		cout << Plumatella.View << endl;
		cout << Plumatella.TypeFood << endl;
		cout << Plumatella.Habitat() << endl;
		cout << Plumatella.GeneralCharacteristics() << endl;
		cout << Plumatella.LifeStyle() << endl;
		cout << Plumatella.TypeBreath() << endl;
		cout << Plumatella.TypeBreeding() << endl;
		cout << Plumatella.TypeZooids << endl;
		cout << Plumatella.TypeGroupZooids << endl;
		cout << endl << endl;

	}
	catch (ERRORS e)
	{
		switch (e)
		{
		case IncorrectNumberOldYear:
			cout << "Некорректное количество лет животного" << endl;
			break;
		case IncorrectLengthWorm:
			cout << "Некорректная длина червя" << endl;
			break;
		case IncorrectDepthHabitat:
			cout << "Некорректная глубина обитания" << endl;
			break;
		case IncorrectSizesEchinoderms:
			cout << "Некорректный размер иглокожого" << endl;
			break;
		case IncorrectNumberRay:
			cout << "Некорректное количество лучей иглокожого" << endl;
			break;
		default:
			break;
		}
	}

	system("pause");
}