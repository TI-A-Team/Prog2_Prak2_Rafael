#ifndef VOLLADDIERER_H_
#define VOLLADDIERER_H_

#include "halbaddierer.h"
#include <vector>

class Volladdierer : public Schaltung
{

	Volladdierer(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* e2, Schnittstelle* a0, Schnittstelle* a1)
	{
		this->Eingang.push_back(e0);
		this->Eingang.push_back(e1);
		this->Eingang.push_back(e2);
		this->Ausgang.push_back(a0);
		this->Ausgang.push_back(a1);

		Schnittstelle* i0 = new Schnittstelle();
		Schnittstelle* i1 = new Schnittstelle();
		Schnittstelle* i2 = new Schnittstelle();

		this->intern.push_back(i0);
		this->intern.push_back(i1);
		this->intern.push_back(i2);

		Halbaddierer* HA0 = new Halbaddierer(e0, e1, i0, i1);
		Halbaddierer* HA1 = new Halbaddierer(i1, e2, i2, a0);

		Oder2* oder = new Oder2(i0, i2, a1);

		this->bausteine.push_back(HA0);
		this->bausteine.push_back(HA1);
		this->bausteine.push_back(oder);

		this->name = "Volladdierer";
	}

	void update()
	{
		this->bausteine[0]->update();
		this->bausteine[1]->update();
		this->bausteine[2]->update();
	}
};

#endif
