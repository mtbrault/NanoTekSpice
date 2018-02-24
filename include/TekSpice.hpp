//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// main class
//

#ifndef TEKSPICE_HPP_
# define TESKPICE_HPP_

#include <map>
#include <iostream>
#include "Parser.hpp"

class	TekSpice
{
public:
	TekSpice(int, char **);
	~TekSpice();

	void	run();
private:
	std::string			_filename;
	std::map<std::string, size_t>	_inputValue;
	Parser				_parser;
};

#endif
