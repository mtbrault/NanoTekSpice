//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4011 method
//

#include "C4011.hpp"

C4011::C4011(const std::string &value)
	: _maxPin(14)
{
	(void) value;
	for (int i = 0; i < 14; i++) {
	        _pin.push_back(NULL);
		_otherPin.push_back(0);
	}
}

C4011::~C4011()
{
}

int	C4011::getMaxPin() const
{
	return _maxPin;
}

nts::Tristate	C4011::compute(std::size_t pin)
{
	(void) pin;
	return nts::Tristate::UNDEFINED;
}

void	C4011::setLink(std::size_t pin, nts::IComponent &other,
		       std::size_t otherPin)
{
        (void) pin;
	(void) other;
	(void) otherPin;
}

void	C4011::dump() const
{
}
