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
		if(_intelligence == 0) // reste simpliste : on pourrait faire des cas de figure en fonction de la catégorie (con...) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=1;
			else _intelligence-=0;	
		}
		else if (_intelligence < 10)
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=1;
			else _intelligence-=-1;	
		}	
		else // intelligence de 10
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=0;
			else _intelligence-=-1;	
		}		
	}


	else if(influence <= 6) // influence moyenne
	{
		if(_intelligence == 0) // reste simpliste : on pourrait faire des cas de figure en fonction de la catégorie (con...) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=2;
			else _intelligence-=0;	
		}
		else if(_intelligence == 1) // reste simpliste : on pourrait faire des cas de figure en fonction de la catégorie (con...) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=2;
			else _intelligence-=1;	
		}
		else if(_intelligence == 10) // reste simpliste : on pourrait faire des cas de figure en fonction de la catégorie (con...) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=0;
			else _intelligence-=2;	
		}
		else if(_intelligence == 9) // reste simpliste : on pourrait faire des cas de figure en fonction de la catégorie (con...) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=1;
			else _intelligence-=2;	
		}
		else
		{	
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=2;
			else _intelligence-=2;	
		}
	}	
	else  // grande influence
	{
			
		if(_intelligence == 0) // reste simpliste : on pourrait faire des cas de figure en fonction de la catégorie (con...) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=3;
			else _intelligence-=0;	
		}
		else if(_intelligence == 1) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=3;
			else _intelligence-=1;	
		}
		else if(_intelligence == 2) 
		{	
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=3;
			else _intelligence-=2;	
		}
		else if(_intelligence == 8) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=2;
			else _intelligence-=3;	
		}
		else if(_intelligence == 9) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=1;
			else _intelligence-=3;	
		}
		else if(_intelligence == 10) 
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=0;
			else _intelligence-=3;	
		}
		else
		{	float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
				_intelligence+=3;
			else _intelligence-=3;
		}
			
	}		
}

