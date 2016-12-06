#pragma once
#include <stdlib>
#include <iostream>

class media
{
	public:
		media(std::string name, int influence); // constructeur
		~media(); // destructeur

	private:
		std::string _nom;
		int _influence;

};