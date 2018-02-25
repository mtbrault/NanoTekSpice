//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// False file
//

#include <iostream>
#include <string>
#include "False.hpp"

False::False(const std::size_t value)
{
	if (std::stoi(value) == 0)
		_value = nts::Tristate::FALSE;
	else if (std::stoi(value) == 1)
		_value = nts::Tristate::TRUE;		
}

False::~False()
{
}

nts::Tristate	False::compute(size_t pin)
{
	(void)pin;
	return nts::Tristate::UNDEFINED;
}

void	False::setLink(size_t pin, nts::IComponent &comp, size_t otherPin)
{
	(void)pin;
	(void)comp;
	(void)otherPin;
}

void	False::dump() const
{

}
