#include "media.hh"
using namespace std;

// constructeur
Media::Media(std::string name, int influence):
	_nom(name),
	_influence(influence)
{
}

// destructeur
Media::~Media()
{}

string Media::get_name() const
{
	return _nom;
}

int Media::get_influence() const
{
	return _influence;
}
