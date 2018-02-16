//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4008 class
//

#ifndef C4008_HPP_
# define C4008_HPP_

#include "IComponent.hpp"

class C4008 : public IComponent
{
public:
	C4008(std::string const &);
	~C4008();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
