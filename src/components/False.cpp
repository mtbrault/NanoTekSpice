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
	(void) value;
	_value = nts::Tristate::FALSE;
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
