//
// EPITECH PROJECT, 2018
// nanotekspice
// File description:
// factory class
//

#ifndef FACTORY_HPP_
# define FACTORY_HPP_

#include <iostream>
#include <memory>
#include <map>
#include <functional>
#include "IComponent.hpp"

class	Factory
{
public:
	Factory();
	~Factory();
	
	std::unique_ptr<nts::IComponent> createComponent(const std::string &,
							 const std::string &);
	
private:
	template<typename Type>
	std::unique_ptr<nts::IComponent> newComp(const std::string &value) const noexcept
		{
			return new Type(value);
		}
	std::map<const std::string, std::function>	_map;
};

#endif
