//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Clock header
//

#include <string>

class   Clock {
public:
	Clock(const std::string &name, bool state);
	virtual ~Clock();

	std::string getName() const;
	bool	getState() const;
protected:
	std::string _name;
	bool	_state;	
};
