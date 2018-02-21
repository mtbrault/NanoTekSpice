//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4030 class
//

#ifndef C4030_HPP_
# define C4030_HPP_

#include "IComponent.hpp"

class C4030 : public nts::IComponent
{
public:
	C4030(std::string const &);
	~C4030();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
	int		getMaxPin() const;
	
private:
	int						_maxPin;
	std::vector<std::unique_ptr<IComponent>>	_pin;
	std::vector<size_t>				_otherPin;
};

#endif
