//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// tekspice method
//

#include <string>
#include "TekSpice.hpp"
#include "Error.hpp"

TekSpice::TekSpice(int ac, char **av)
	: _filename(av[1]), _parser(Parser(_filename))
{
	std::string	name;
        int		val;
	std::string	tmp;
	std::size_t	index = 0;

	for (int i = 2; i < ac; i++) {
		tmp = av[i];
		index = tmp.find_first_of("=");
		if (index == std::string::npos)
			throw NanoError("Invalid arguments");
		name = tmp.substr(0, index);
		try {
			val = std::stoi(tmp.substr(index + 1));
		} catch (std::exception error) {
			throw NanoError("Bad input value");
		}
		if (val < 0 || val > 1)
			throw NanoError("Input value must be 0 or 1");
		_inputValue[name] = val;
	}
}

TekSpice::~TekSpice()
{
}

void	TekSpice::run()
{

}
