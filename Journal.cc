#include "Journal.hh"
#include <ctime>
#include <cstdlib>
using namespace std;


// Besoin de coder constructeur, destructeur ?

void Journal::interview(Candidat c)
{
	int image = c.get_image();
	if (_influence <= 3) // media de faible influence, entre 0 et 3
	{
		image = c.image_alterne1(image);
	}
	else if(_influence <= 6) // media d'influence moyenne, entre 4 et 6
	{
		image = c.image_alterne2(image);
	}	
	else // media de grande influence
	{
		image = c.image_alterne3(image);
	}	
}	
