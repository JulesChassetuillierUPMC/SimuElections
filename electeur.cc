#include "electeur.hh"
#include <ctime>
#include <cstdlib>
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
		
		float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		cout<<"random_number = "<<random_number<<endl;
		if(random_number<0.5)
			_intelligence+=1;
		else _intelligence-=1;	
	}

	else if(influence <= 6)
	{
		
		float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
		cout<<"random_number = "<<random_number<<endl;
		if(random_number<0.5)
			_intelligence+=2;
		else _intelligence-=2;	
		
	}	
	else  // influence entre 7 et 10
	{
		if(_intelligence<=7)
		{	
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=3;
			else _intelligence-=3;
		}	
			
		else if (_intelligence<10)
		{	
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
			_intelligence+=1;
			else _intelligence-=1;	
		}
	}		
}