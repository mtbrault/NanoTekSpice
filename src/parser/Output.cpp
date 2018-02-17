//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Output file
//

#include <iostream>
#include <string>
#include "Output.hpp"

Output::Output(const std::string &name, bool state)
	: _name(name), _state(state)
{
}

Output::~Output()
{
}

std::string Output::getName() const
{
	return _name;
}

bool	Output::getState() const
{
	return _state;
}
