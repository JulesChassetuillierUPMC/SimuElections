#include "candidat.hh"
#include <ctime>
#include <cstdlib>
using namespace std;
// constructeur

Candidat::Candidat(std::string name,std::string p, int image):
	_nom(name),
	_personnalite(p),
	_image(image)
{
}
// destructeur
Candidat::~Candidat()
{}

string Candidat::get_personnalite()
{
	return _personnalite;
}

int Candidat::get_image()
{
	return _image;
}

string Candidat::get_nom()
{
	return _nom;
}

void Candidat::interview(Media M)
{
	int influence = M.get_influence();
	if(influence <= 3) // media de faible influence
	{
		if(_image == 0 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=1;
			else _image-=0;
		}
		else if (_image == 10)
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX); // nombre aleatoire entre 0 et 1
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // alterne de 1 point l'image du candidat
				_image+=0;
			else _image-=1;
		}
		else
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX); // nombre aleatoire entre 0 et 1
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // alterne de 1 point l'image du candidat
				_image+=1;
			else _image-=1;
		}
	}
	else if(influence <= 6) // media d'influence moyenne
	{
		if(_image == 0 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=2;
			else _image-=0;
		}

		else if(_image == 1 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=2;
			else _image-=1;
		}
		else if(_image == 9 || _image == 10 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=0;
			else _image-=2;
		}
		else
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // alterne de 2 points l'image du candidat
				_image+=2;
			else _image-=2;
		}
	}	
	else  // Grande influence
	{
		if(_image == 0 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=3;
			else _image-=0;
		}
		else if(_image == 1 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=3;
			else _image-=1;
		}
		else if(_image == 2 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=3;
			else _image-=2;
		}

		else if(_image<=7) // on ne veut pas atteindre une image > 10
		{
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				_image+=3;
			else _image-=3;
		}
		else if (_image<=9) // lorsqu'un candidat a une image de 8 ou 9 
		{
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
			_image+=1;
			else _image-=3;
		}		
		else if (_image==10) // lorsqu'un candidat a une image de 10 : elle ne peut etre augmentee 
		{
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
			_image+=0;
			else _image-=3;
		}
	}	
}	