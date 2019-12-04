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
		Worms EarthWorm = Worms("�������� �����", 0.5, "��������������", "��������� �����", "�������� ������������� ���������", 10);
		cout << EarthWorm.Name << endl;
		cout << EarthWorm.GetOldYear() << " ���" << endl;
		cout << EarthWorm.TypeAnimal << endl;
		cout << EarthWorm.View << endl;
		cout << EarthWorm.TypeFood << endl;
		cout << EarthWorm.Habitat() << endl;
		cout << EarthWorm.GeneralCharacteristics() << endl;
		cout << EarthWorm.LifeStyle() << endl;
		cout << EarthWorm.TypeBreath() << endl;
		cout << EarthWorm.TypeBreeding() << endl;
		cout << EarthWorm.GetLength() << "��" << endl;
	}
	catch (ERRORS e)
	{
		switch (e)
		{
		case IncorrectNumberOldYear:
			cout << "������������ ���������� ��� ���������" << endl;
			break;
		case IncorrectLengthWorm:
			cout << "������������ ����� �����" << endl;
			break;
		case IncorrectDepthHabitat:
			cout << "������������ ������� ��������" << endl;
			break;
		case IncorrectSizesEchinoderms:
			cout << "������������ ������ ����������" << endl;
			break;
		case IncorrectNumberRay:
			cout << "������������ ���������� ����� ����������" << endl;
			break;
		default:
			break;
		}
	}

	system("pause");
}