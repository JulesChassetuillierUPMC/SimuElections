#include "candidat.hh"
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
	if(influence <= 3) // faible influence
	{
		// modification test : il faudra faire des rand
		_image+=1;
	}
	else if(influence <= 6)
	{
		_image-=2;
	}	
	else  // influence entre 7 et 10
	{
		if(_image<=7)
		_image+=3;
		else if (_image<10)
		_image+=1;	
	}	
}	