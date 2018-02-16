//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4071 class
//

#ifndef C4071_HPP_
# define C4071_HPP_

#include "IComponent.hpp"

class C4071 : public IComponent
{
public:
	C4071(std::string const &);
	~C4071();
	
	nts::Tristate	compute(std::size_t = 1);
	void		setLink(std::size_t, nts::IComponent &,
					std::size_t);
	void		dump() const;
};

#endif
