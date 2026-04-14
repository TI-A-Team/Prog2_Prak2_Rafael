#ifndef HALBADDIERER_H_
#define HALBADDIERER_H_

#include "schaltung.h"


class Halbaddierer : public Schaltung
{
//Any class content is private by default, therefore you have to declare if anything is public - even the constructor
public:
	Halbaddierer(Schnittstelle* e0, Schnittstelle* e1, Schnittstelle* a0, Schnittstelle* a1)
	{
		this->Eingang.push_back(e0);
		this->Eingang.push_back(e1);
		this->Ausgang.push_back(a0);
		this->Ausgang.push_back(a1);

		Xor2* xor2 = new Xor2(e0, e1, a0);
		this->bausteine.push_back(xor2);

		Und2* und2 = new Und2(e0, e1, a1);
		this->bausteine.push_back(und2);

		this->name = "Halbaddierer";
	}

	void update()
	{
		this->bausteine[0]->update();
		this->bausteine[1]->update();
	}
};

#endif
