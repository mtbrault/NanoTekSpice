//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// NanoError header
//

#ifndef ERROR_HPP_
# define ERROR_HPP_

#include <iostream

class	NanoError : public std::exception {
public:
	NanoError(std::string const &message);
	~NanoError() throw();

	const char *what() const throw();
	std::string _message;
};

class   InputError : public NanoError {
public:
	InputError(std::string const &message);
	~InputError() throw();

	std::string _message;
};

#endif	/* !ERROR_HPP_ */

