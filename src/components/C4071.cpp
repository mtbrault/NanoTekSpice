//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4071 method
//

#include "C4071.hpp"

C4071::C4071(const std::string &value)
	: _maxPin(14)
{
	(void) value;
	for (int i = 0; i < 14; i++) {
	        _pin.push_back(NULL);
		_otherPin.push_back(0);
	}
}

C4071::~C4071()
{
}

int	C4071::getMaxPin() const
{
	return _maxPin;
}

nts::Tristate	C4071::compute(std::size_t pin)
{
	(void) pin;
	return nts::Tristate::UNDEFINED;
}

void	C4071::setLink(std::size_t pin, nts::IComponent &other,
		       std::size_t otherPin)
{
	(void) pin;
	(void) other;
	(void) otherPin;
}

void	C4071::dump() const
{
}
