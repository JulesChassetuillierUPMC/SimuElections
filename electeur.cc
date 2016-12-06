#include "electeur.hh"
using namespace std;

// constructeur
Electeur::Electeur(int intelligence):
	_intelligence(intelligence)
{
}	

Electeur::~Electeur()
{}

int Electeur::get_intelligence()
{
	return _intelligence;
}

void Electeur::TV(Media M)
{
	int influence = M.get_influence();
	if(influence <= 3) // faible influence
	{
		// modification test : il faudra faire des rand
		_intelligence+=1;
	}
	else if(influence <= 6)
	{
		_intelligence-=2;
	}	
	else  // influence entre 7 et 10
	{
		if(_intelligence<=7)
			_intelligence+=3;
		else if (_intelligence<10)
		_intelligence+=1;	
	}	
}