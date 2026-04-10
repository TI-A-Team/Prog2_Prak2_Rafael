//Baustein class

#include <iostream>
#include <vector>
#include "schnittstelle.h"

using namespace std;

class Baustein
{
	public:
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
		cout << "Baustein: " << name << endl;

		for (Schnittstelle eingang : Eingang) cout << eingang << endl;
		for (Schnittstelle ausgang : Ausgang) cout << ausgang << endl;
	}

	virtual void update() = 0;

	protected:
	string name = "Test";
	vector<Schnittstelle*> Eingang;
	vector<Schnittstelle*> Ausgang;

	virtual ~Baustein()
	{
		cout << "Aufruf des Baustein-Konstruktors" << endl;
	}


};
