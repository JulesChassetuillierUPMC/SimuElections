#pragma once
#include <iostream>

class Media
{
	public:
		Media(std::string name, int influence); // constructeur
		~Media(); // destructeur
		std::string get_name() const; 
		int get_influence() const; 

	private:
		std::string _nom;
		int _influence; // faible[0 3], moyenne [4 7], forte [8 10]

};


//
