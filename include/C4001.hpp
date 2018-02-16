//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4001 class
//

#ifndef C4001_HPP_
# define C4001_HPP_

#include "IComponent.hpp"

class	C4001 : public nts::IComponent
{
public:
	C4001(std::string const &);
	~C4001();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
