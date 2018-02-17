//
// EPITECH PROJECT, 2018
// nanotekspice
// File description:
// factory method
//

#include "C4001.hpp"
#include "IComponent.hpp"
#include "Factory.hpp"

Factory::Factory()
{
//	_map["2716"] = std::function<std::unique_ptr<nts::IComponent>(C2716, std::string) = newComp;
	_map["4001"] = std::function<std::unique_ptr<nts::IComponent>(std::string) = <C4001>newComp;
/*	_map["4008"] = std::function<std::unique_ptr<nts::IComponent>(C4008, std::string) = newComp;
	_map["4011"] = std::function<std::unique_ptr<nts::IComponent>(C4011, std::string) = newComp;
	_map["4013"] = std::function<std::unique_ptr<nts::IComponent>(C4013, std::string) = newComp;
	_map["4017"] = std::function<std::unique_ptr<nts::IComponent>(C4017, std::string) = newComp;
	_map["4030"] = std::function<std::unique_ptr<nts::IComponent>(C4030, std::string) = newComp;
	_map["4040"] = std::function<std::unique_ptr<nts::IComponent>(C4040, std::string) = newComp;
	_map["4069"] = std::function<std::unique_ptr<nts::IComponent>(C4069, std::string) = newComp;
	_map["4071"] = std::function<std::unique_ptr<nts::IComponent>(C4071, std::string) = newComp;
	_map["4081"] = std::function<std::unique_ptr<nts::IComponent>(C4081, std::string) = newComp;
	_map["4094"] = std::function<std::unique_ptr<nts::IComponent>(C4094, std::string) = newComp;
	_map["4514"] = std::function<std::unique_ptr<nts::IComponent>(C4514, std::string) = newComp;
	_map["4801"] = std::function<std::unique_ptr<nts::IComponent>(C4801, std::string) = newComp;*/	
}

Factory::~Factory()
{
}

std::unique_ptr<IComponent>	Factory::createComponent(const std::string &type,
							 const std::string &value)
{
	if (!_map[type])
		return NULL;
	_map[type](value);
	return newComp(value);
}
