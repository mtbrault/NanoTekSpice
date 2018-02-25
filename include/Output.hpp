//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Output header
//

#include <iostream>
#include "IComponent.hpp"

class	Output : public nts::IComponent
{
public:
	Output(const std::size_t);
        ~Output();

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
