//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Input file
//

#include <iostream>
#include <string>
#include "Input.hpp"

Input::Input(const std::string &value)
{
	if (value == 0)
		_value = nts::Tristate::FALSE;
	else if (value == 1)
		_value = nts::Tristate::TRUE;
		
}

Input::~Input()
{
}

nts::Tristate	Input::compute(size_t pin)
{
	(void)pin;
}

void	Input::setLink(size_t pin, nts::IComponent &comp, size_t otherPin)
{
	(void)pin;
	(void)comp;
	(void)otherPîn;
}

void	Input::dump() const
{

}

std::string Input::getName() const
{
	return _name;
}
