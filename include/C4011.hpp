//
// EPITECH PROJECT, 2018
// tekspice
// File description:
// 4011 class
//

#ifndef C4011_HPP_
# define C4011_HPP_

#include <unordered_map>
#include "IComponent.hpp"

class C4011 : public nts::IComponent
{
public:
	C4011(std::string const &);
	~C4011();
	
	nts::Tristate	compute(std::size_t = 1);
	nts::Tristate	output(size_t);
	nts::Tristate	input(size_t);
	void		setLink(std::size_t, nts::IComponent &,
				std::size_t);
	void		dump() const;
	size_t		getMaxPin() const;
	std::string	getType() const;
	void		setValue(const size_t);
	
private:
	size_t			_maxPin;
	nts::IComponent		*_pin[14];
	std::vector<size_t>	_otherPin;
	std::string		_type;
	std::unordered_map<size_t, std::pair<size_t, size_t>>	_pair;
};

#endif
