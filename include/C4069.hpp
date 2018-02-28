//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4069 class
//

#ifndef C4069_HPP_
# define C4069_HPP_

#include "IComponent.hpp"

class C4069 : public nts::IComponent
{
public:
	C4069(std::string const &);
	~C4069();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
	size_t		getMaxPin() const;
	
private:
	size_t						_maxPin;
	std::vector<std::unique_ptr<IComponent>>	_pin;
	std::vector<size_t>				_otherPin;
};

#endif
