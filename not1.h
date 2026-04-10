//Not1 Class
#include "baustein.h"
#include <vector>

class Not1 : public Baustein
{
	Not1(Schnittstelle* e0, Schnittstelle* a0)
	{
		Eingang.push_back(e0);
		Ausgang.push_back(a0);

		name = "Not1";
	}

	public:
	void update()
	{
		switch (Eingang[0])
		{
			case Schnittstelle::HIGH: *Ausgang[0] = Schnittstelle::LOW; break;
			case Schnittstelle::LOW: *Ausgang[0] = Schnittstelle::HIGH; break;
			case Schnittstelle::UNDEFINED: *Ausgang[0] = Schnittstelle::UNDEFINED; break;
		}

	}

};
