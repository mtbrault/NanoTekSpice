//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Input file
//

#include <iostream>
#include <string>
#include "Input.hpp"

Input::Input(const std::string &name, bool state)
	: _name(name), _state(state)
{
}

Input::~Input()
{
}

std::string Input::getName() const
{
	return _name;
}

bool	Input::getState() const
{
	return _state;
}
