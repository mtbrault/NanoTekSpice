//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// True file
//

#include <iostream>
#include <string>
#include "True.hpp"

True::True(const std::string &value)
{
	(void)value;
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
