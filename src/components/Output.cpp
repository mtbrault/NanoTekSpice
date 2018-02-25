//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Output file
//

#include <iostream>
#include <string>
#include "Output.hpp"

Output::Output(const std::string &value)
{
	(void)value;
}

Output::~Output()
{
}

nts::Tristate	Output::compute(size_t pin)
{
	(void)pin;
	return nts::Tristate::UNDEFINED;
}

void	Output::setLink(size_t pin, nts::IComponent &comp, size_t otherPin)
{
	(void)pin;
	(void)comp;
	(void)otherPin;
}

void	Output::dump() const
{

}
