//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4001 method
//

#include "C4001.hpp"

C4001::C4001(const std::string &value)
	: _maxPin(14)
{
	(void) value;
	for (int i = 0; i < 14; i++) {
	        _pin.push_back(NULL);
		_otherPin.push_back(0);
	}
}

C4001::~C4001()
{
}

int	C4001::getMaxPin() const
{
	return _maxPin;
}

nts::Tristate	C4001::compute(std::size_t pin)
{
	(void) pin;
	return nts::Tristate::UNDEFINED;
}

void	C4001::setLink(std::size_t pin, nts::IComponent &other,
		       std::size_t otherPin)
{
        _pin[pin] = other;
	_otherPin[pin] = otherPin;
}

void	C4001::dump() const
{
}
