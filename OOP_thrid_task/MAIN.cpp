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