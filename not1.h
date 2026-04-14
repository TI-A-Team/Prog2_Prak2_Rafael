#ifndef NOT1_H_
#define NOT1_H_

#include "baustein.h"

using namespace Schnittstelle;

class Not1 : public Baustein
{
	public:

	Not1(Schnittstelle* e0, Schnittstelle* a0)
	{
		this->Eingang.push_back(e0);
		this->Ausgang.push_back(a0);
		this->name = "Not1";
	}

	void update()
	{
		switch (this->Eingang[0]->getPegel())
		{
			case 1: Ausgang[0]->setPegel(0); break;
			case 0: Ausgang[0]->setPegel(1); break;
			case -1: Ausgang[0]->setPegel(-1); break;
		}
	}
};

#endif
