#include <iostream>
#include <vector>
#include <string>

#include "schnittstelle.h"
#include "baustein.h"
//#include "not1.h"
#include "oder2.h"
#include "und2.h"
#include "xor2.h"
#include "schaltung.h"
#include "halbaddierer.h"
#include "volladdierer.h"



//using namespace std;

void test2(Baustein *b)
{
	b->Eingang[0]->setPegel(0);
	b->Eingang[1]->setPegel(0);
	b->update();
	b->print();

	b->Eingang[0]->setPegel(0);
	b->Eingang[1]->setPegel(1);
	b->update();
	b->print();

	b->Eingang[0]->setPegel(1);
	b->Eingang[1]->setPegel(0);
	b->update();
	b->print();

	b->Eingang[0]->setPegel(1);
	b->Eingang[1]->setPegel(1);
	b->update();
	b->print();
}


int main()
{
	Schnittstelle e0;
	Schnittstelle e1;
	Schnittstelle e2;
	Schnittstelle a0;
	Schnittstelle a1;

	Halbaddierer halb(&e0, &e1, &a0, &a1);
	test2(&halb);

	int x;
	cin >> x;

	return 0;
}
