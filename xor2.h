#include "baustein.h"
using namespace std;

class Xor2 : public Baustein
{
	Xor2(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* a0)
	{
		Eingang.push_back(e0);
		Eingang.push_back(e1);
		Ausgang.push_back(a0);

		name = "Xor2";
	}

	public:
	void update()
	{
		if ((Eingang[0] == Schnittstelle::HIGH && Eingang[1] == Schnittstelle::LOW) || (Eingang[0] == Schnittstelle::LOW && Eingang[1] == Schnittstelle::HIGH))
			Ausgang[0] = Schnittstelle::HIGH; break;

		if (Eingang[0] == Schnittstelle::UNDEFINED || Eingang[1] == Schnittstelle::UNDEFINED) Ausgang[0] = Schnittstelle::UNDEFINED; break;

		Ausgang[0] = Schnittstelle::LOW;
	}

}
