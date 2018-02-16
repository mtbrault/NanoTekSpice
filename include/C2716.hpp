//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 2716 class
//

#ifndef C2716_HPP_
# define C2716_HPP_

#include "IComponent.hpp"

class C2716 : public IComponent
{
public:
	C2716(std::string const &);
	~C2716();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
