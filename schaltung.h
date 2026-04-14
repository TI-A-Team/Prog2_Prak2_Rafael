#ifndef SCHALTUNG_H_
#define SCHALTUNG_H_

#include "baustein.h"

class Schaltung : public Baustein
{
	protected:
	vector<Schnittstelle*> intern;
	vector<Baustein*> bausteine;
};

#endif
