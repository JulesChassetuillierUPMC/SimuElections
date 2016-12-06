#include "Simulateur.hh"

Simulateur::Simulateur(int units)
{
	sim_ = units;
	date = 0;
}

Simulateur::~Simulateur(){}

void Simulateur::add_emp(Employe emp)
{
	empoye_vect.push_back(emp);
}

void Simulateur::run()
{
	int pi = 15;
	int p;
	bool busy;
	
	while(date < sim_ || busy)
	{
		
		
		p = rand()%100;
		if(p<pi)
		{
			Client c(date);
			queue_client.push(c); // Ajout des clients
		}
		// MAJ des employes
		busy = false;
		for(auto & emp:empoye_vect)
		{
			if(emp.update() == TRAVAIL)
			{
				busy = true;
			}
		}
		date++;
	
	}
	
}

int Simulateur::get_next_task()
{
	int n;
	if(queue_client.empty())
	{
		return 0;
	}
	n = (queue_client.front()).get_task_time();
	queue_time[date-(queue_client.front()).get_date()]++;
	queue_client.pop();
	return n;
	
}

void Simulateur::stats()
{
	int i=0;
	std::map<int,int>::iterator it;
	
	// Affichage des statistiques pour les employés
	std::cout << "\t\tTRAVAIL\t\tPAUSE\t\tATTENTE\n";
	for(auto& emp : empoye_vect) {
		i++;
		std::cout << "Employé" << i << "\t";
		emp.stats();
	}
	
	std::cout << std::endl;
	// Affichage des statistiques pour les clients
	std::cout << "TEMPS\tNBCLIENT\n";
	for(it=queue_time.begin();it!=queue_time.end();it++) {
		std::cout << it->first << "\t" << it->second << "\n";
	}
}