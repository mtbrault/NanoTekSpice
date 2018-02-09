//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4011 class
//

#ifndef C4011_HPP_
# define C4011_HPP_

#include "IComponent.hpp"

class C4011 : public IComponent
{
public:
	C4011(std::string const &);
	~C4011();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
