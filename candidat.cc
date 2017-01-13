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

string Candidat::get_personnalite() const
{
	return _personnalite;
}

int Candidat::get_image() const
{
	return _image;
}

string Candidat::get_nom() const
{
	return _nom;
}

int Candidat::image_alterne1(int image) 
{
	if(image == 0 ) // on ne veut pas atteindre une image < 0
		{
			// generation d'un nombre aleatoire entre 0 et 1
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // une chance sur 2 dans ce cas la d'ameliorer l'image du candidat d'un point
				image+=1;
			else image-=0;
		}
		else if (image == 10) // on ne veut pas atteindre une image > 10
		{
			// generation d'un nombre aleatoire entre 0 et 1
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX); 
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // une chance sur 2 dans ce cas la de diminuer l'image du candidat d'un point
				image+=0;
			else image-=1;
		}
		else
		{
			// generation d'un nombre aleatoire entre 0 et 1
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX); 
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // alterne de 1 point l'image du candidat
				_image+=1;
			else _image-=1;
		}
		return image;

}

int Candidat::image_alterne2(int image)
{
	if(image == 0 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=2;
			else image-=0;
		}

		else if(image == 1 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=2;
			else image-=1;
		}
		else if(image == 9 || image == 10 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=0;
			else image-=2;
		}
		else
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // alterne de 2 points l'image du candidat
				image+=2;
			else image-=2;
		}
		return image;
}

int Candidat::image_alterne3(int image)
{
	if(image == 0 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=3;
			else image-=0;
		}
		else if(image == 1 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=3;
			else image-=1;
		}
		else if(image == 2 ) // on ne veut pas atteindre une image < 0
		{
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=3;
			else image-=2;
		}

		else if(image<=7) // on ne veut pas atteindre une image > 10
		{
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5) // A MODIFIER (exemple entre 0 et 0.25, 0.25-0.5...)
				image+=3;
			else image-=3;
		}
		else if (image<=9) // lorsqu'un candidat a une image de 8 ou 9 
		{
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
			image+=1;
			else image-=3;
		}		
		else if (image==10) // lorsqu'un candidat a une image de 10 : elle ne peut etre augmentee 
		{
			
			float random_number =  static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
			cout<<"random_number = "<<random_number<<endl;
			if(random_number<0.5)
			image+=0;
			else image-=3;
		}
		return image;
}