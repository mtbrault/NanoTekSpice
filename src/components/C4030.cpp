//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4030 method
//

#include "C4030.hpp"

C4030::C4030(const std::string &value)
	: _maxPin(14)
{
	(void) value;
	for (int i = 0; i < 14; i++) {
	        _pin.push_back(NULL);
		_otherPin.push_back(0);
	}
}

C4030::~C4030()
{
}

int	C4030::getMaxPin() const
{
	return _maxPin;
}

nts::Tristate	C4030::compute(std::size_t pin)
{
	(void) pin;
	return nts::Tristate::UNDEFINED;
}

void	C4030::setLink(std::size_t pin, nts::IComponent &other,
		       std::size_t otherPin)
{
	(void) pin;
	(void) other;
	(void) otherPin;
}

void	C4030::dump() const
{
}
