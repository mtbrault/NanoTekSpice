//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Input file
//

#include <iostream>
#include <string>
#include "Input.hpp"

Input::Input(const std::size_t &value)
	: _maxPin(1)
{
        _value = (value == 0) ? nts::Tristate::FALSE : nts::Tristate::TRUE;
}

Input::~Input()
{
}

nts::Tristate	Input::compute(size_t pin)
{
	(void)pin;
	return nts::Tristate::UNDEFINED;
}

void	Input::setLink(size_t pin, nts::IComponent &comp, size_t otherPin)
{
	(void)pin;
	(void)comp;
	(void)otherPin;
}

void	Input::dump() const
{

}
