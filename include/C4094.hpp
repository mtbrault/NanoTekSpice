//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4094 class
//

#ifndef C4094_HPP_
# define C4094_HPP_

#include "IComponent.hpp"

class C4094 : public IComponent
{
public:
	C4094(std::string const &);
	~C4094();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
