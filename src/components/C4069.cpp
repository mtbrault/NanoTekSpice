//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4069 method
//

#include "C4069.hpp"

C4069::C4069(const std::string &value)
	: _maxPin(14)
{
	(void) value;
	for (int i = 0; i < 14; i++) {
	        _pin.push_back(NULL);
		_otherPin.push_back(0);
	}
}

C4069::~C4069()
{
}

int	C4069::getMaxPin() const
{
	return _maxPin;
}

nts::Tristate	C4069::compute(std::size_t pin)
{
	(void) pin;
	return nts::Tristate::UNDEFINED;
}

void	C4069::setLink(std::size_t pin, nts::IComponent &other,
		       std::size_t otherPin)
{
	(void) pin;
	(void) other;
	(void) otherPin;
}

void	C4069::dump() const
{
}
