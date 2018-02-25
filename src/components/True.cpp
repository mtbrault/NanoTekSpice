//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// True file
//

#include <iostream>
#include <string>
#include "True.hpp"

True::True(const std::size_t value)
{
	if (std::stoi(value) == 0)
		_value = nts::Tristate::FALSE;
	else if (std::stoi(value) == 1)
		_value = nts::Tristate::TRUE;		
}

True::~True()
{
}

nts::Tristate	True::compute(size_t pin)
{
	(void)pin;
	return nts::Tristate::UNDEFINED;
}

void	True::setLink(size_t pin, nts::IComponent &comp, size_t otherPin)
{
	(void)pin;
	(void)comp;
	(void)otherPin;
}

void	True::dump() const
{

}
