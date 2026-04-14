#ifndef UND2_H_
#define UND2_H_

#include "baustein.h"

class Und2 : public Baustein
{
	public:

	Und2(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* a0)
	{
		Eingang.push_back(e0);
		Eingang.push_back(e1);
		Ausgang.push_back(a0);
		name = "Und2";
	}

	void update()
	{
		if (Eingang[0]->getPegel() == -1 || Eingang[1]->getPegel() == -1) Ausgang[0]->setPegel(-1); break;
		if (Eingang[0]->getPegel() == 0 || Eingang[1]->getPegel() == 0) Ausgang[0]->setPegel(0); break;
			Ausgang[0]->setPegel(1);
	}
};

#endif
