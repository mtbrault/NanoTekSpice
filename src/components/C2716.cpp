//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 2716 method
//

#include "C2716.hpp"

C2716::C2716(const std::string &value)
	: _maxPin(14)
{
	for (int i = 0; i < 14; i++) {
	        _pin.push_back(NULL);
		_otherPin.push_back(0);
	}
}

C2716::~C2716()
{
}

int	C2716::getMaxPin() const
{
	return _maxPin;
}

nts::Tristate	C2716::compute(std::size_t pin)
{
	first = first;
	return nts::Tristate::UNDEFINED;
}

void	C2716::setLink(std::size_t pin, nts::IComponent &other,
		       std::size_t otherPin)
{
	if (_pin[pin] != NULL)
		throw std::overflow_error("2 links");
	_pin[pin] = other;
	
}

void	C2716::dump() const
{
}
