
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <fstream>
#include <iomanip>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		void	youknowharl(std::string level);
		~Harl();
};


#endif