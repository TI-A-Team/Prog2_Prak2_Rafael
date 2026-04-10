#include "baustein.h"

class Schaltung : public Baustein
{
	protected:
	vector<Schnittstelle*> intern;
	vector<Baustein*> bausteine;
};
