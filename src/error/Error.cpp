//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// NanoError file
//

#include "NanoError.hpp"

NanoError::NanoError(std::string const &message)
	: _message(message)
{
}

NanoError::~NanoError() throw()
{
}

const char *NanoError::what() const throw()
{
	return this->_message.c_str();
}
