//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4013 class
//

#ifndef C4013_HPP_
# define C4013_HPP_

#include "IComponent.hpp"

class C4013 : public IComponent
{
public:
	C4013(std::string const &);
	~C4013();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
