//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Clock file
//

#include <iostream>
#include <string>
#include "Clock.hpp"

Clock::Clock(const std::string &name, bool state)
	: _name(name), _state(state)
{
}

Clock::~Clock()
{
}

std::string Clock::getName() const
{
	return _name;
}

bool	Clock::getState() const
{
	return _state;
}
