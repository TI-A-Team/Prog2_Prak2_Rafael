#ifndef XOR2_H_
#define XOR2_H_

#include "baustein.h"

class Xor2 : public Baustein
{
	public:

	Xor2(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* a0)
	{
		Eingang.push_back(e0);
		Eingang.push_back(e1);
		Ausgang.push_back(a0);
		name = "Xor2";
	}

	void update()
	{
		if (Eingang[0]->getPegel() == -1 || Eingang[1]->getPegel() == -1) Ausgang[0]->setPegel(-1); return;
		if (Eingang[0]->getPegel() + Eingang[1]->getPegel() == 1) Ausgang[0]->setPegel(1); return;
			Ausgang[0]->setPegel(0);
	}

};

#endif
