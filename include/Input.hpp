//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Input header
//

#include <iostream>
#include "IComponent.hpp"

class	Input : public nts::IComponent
{
public:
	Input(const std::string &);
        ~Input();

	nts::Tristate	compute(size_t = 1);
	void		setLink(size_t, nts::IComponent &, size_t);
	void		dump() const;
	std::string	getMaxPin() const;
private:
	int						_maxPin;
	std::vector<std::unique_ptr<nts::IComponent>>	_pin;
	std::vector<size_t>				_otherPin;
	nts::Tristate					_value;
};
