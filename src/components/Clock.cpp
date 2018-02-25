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
	_value = (std::stoi(value) == 0) ? nts::Tristate::FALSE : nts::Tristate::TRUE;
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
