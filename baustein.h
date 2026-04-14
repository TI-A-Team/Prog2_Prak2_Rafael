//Baustein class
#ifndef BAUSTEIN_H_
#define BAUSTEIN_H_

#include "schnittstelle.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace Schnittstelle;

class Baustein
{
	protected:

	string name;
	vector<Schnittstelle*> Eingang;
	vector<Schnittstelle*> Ausgang;

	public:

	friend void test2(Baustein* b);

	void addEingang(Schnittstelle* schnittstelle)
	{
		Eingang.push_back(schnittstelle);
	}

	void addAusgang(Schnittstelle* schnittstelle)
	{
		Ausgang.push_back(schnittstelle);
	}

	virtual void print()
	{
		cout << "Baustein: " << this->name << endl;

		int i = 0;

		for (Schnittstelle* eingang : Eingang)
		{
		    cout << "Eingang " << i << ": Pegel = " << eingang->getPegel() << endl; i++;
		}

		i = 0;

		for (Schnittstelle* ausgang : Ausgang)
		{
			cout << "Ausgang " << i << ": Pegel = " << ausgang->getPegel() << endl; i++;
		}
	}

	virtual void update() = 0;

	virtual ~Baustein()
	{
		cout << "Aufruf des Baustein-Konstruktors" << endl;
	}
};

#endif
