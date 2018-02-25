//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Clock file
//

#include <iostream>
#include <string>
#include "Clock.hpp"

Clock::Clock(const std::string &value)
{
	if (std::stoi(value) == 0)
		_value = nts::Tristate::FALSE;
	else if (std::stoi(value) == 1)
		_value = nts::Tristate::TRUE;		
}

Clock::~Clock()
{
}

nts::Tristate	Clock::compute(size_t pin)
{
	(void)pin;
	return nts::Tristate::UNDEFINED;
}

void	Clock::setLink(size_t pin, nts::IComponent &comp, size_t otherPin)
{
	(void)pin;
	(void)comp;
	(void)otherPin;
}

void	Clock::dump() const
{

}
