//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4011 class
//

#ifndef C4011_HPP_
# define C4011_HPP_

#include "IComponent.hpp"

class C4011 : public nts::IComponent
{
public:
	C4011(std::string const &);
	~C4011();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
	size_t		getMaxPin() const;
	
private:
	int						_maxPin;
	std::vector<std::unique_ptr<IComponent>>	_pin;
	std::vector<size_t>				_otherPin;
};

#endif
