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
	: _filename(av[1]), _parser(new Parser(_filename))
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
	_loopFunc["display"] = display;
	_loopFunc["simulate"] = simulate;
	_loopFunc["exit"] = exit;
	_loopFunc["loop"] = loop;
	_loopFunc["dump"] = dump;
}

TekSpice::~TekSpice()
{
}

int	TekSpice::changeValue(const std::string cmd)
{
	(void)cmd;
	return -1;
}

int	TekSpice::display()
{
	std::cout << "Je suis dans display" << std::endl;
	return 0;
}

int	TekSpice::exit()
{
	std::cout << "Je suis dans exit" << std::endl;
	return 1;
}

int	TekSpice::loop()
{
	std::cout << "Je suis dans loop" << std::endl;
	return 0;
}

int	TekSpice::simulate()
{
	std::cout << "Je suis dans simulate" << std::endl;
	return 0;
}

int	TekSpice::dump()
{
	std::cout << "Je suis dans dump" << std::endl;
	return 0;
}

void	TekSpice::run()
{
	std::string	cmd;

	try {
		_parser->parsing_manager();
	} catch (const NanoError error) {
		throw error;
	}
	std::cout << ">";
	while (std::cin >> cmd) {
		if (!_loopFunc[cmd]) {
			if (changeValue(cmd) == -1)
				std::cerr << "Command \"" << cmd << "\" is invalid" << std::endl;
		}
	        else
			if (_loopFunc[cmd]() == 1)
				break ;
		std::cout << ">";
	}
}
