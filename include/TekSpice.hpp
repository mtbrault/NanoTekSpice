//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// main class
//

#ifndef TEKSPICE_HPP_
# define TESKPICE_HPP_

#include <map>
#include <unordered_map>
#include <iostream>
#include <functional>
#include <memory>
#include "Parser.hpp"

class	TekSpice
{
public:
	TekSpice(int, char **);
	~TekSpice();

	void	run();
	static int	display();
	static int	simulate();
	static int	exit();
	static int	loop();
	static int	dump();
private:
	std::string						_filename;
	std::map<std::string, size_t>				_inputValue;
	std::unique_ptr<Parser>					_parser;
	std::unordered_map<std::string, std::function<int()>>	_loopFunc;
};

#endif
