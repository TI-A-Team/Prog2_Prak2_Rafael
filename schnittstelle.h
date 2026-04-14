#ifndef SCHNITTSTELLE_H_
#define SCHNITTSTELLE_H_

//do not declare a namespace around a single class. A class defines its own namespace.


class Schnittstelle
{
	public:
	const static short HIGH = 1;
	const static short LOW = 0;
	const static short UNDEFINED = -1;

	short getPegel()
	{
		return pegel;
	}

	short setPegel(short pegel)
	{
		if(pegel == HIGH || pegel == LOW){ this->pegel = pegel; return true;}

		this->pegel = UNDEFINED; return false;
	}

	private:
	short pegel = LOW;


};


#endif
