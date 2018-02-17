//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Output header
//

#include <string>

class	Output {
public:
	Output(const std::string &name, bool state);
	virtual ~Output();

	std::string getName() const;
	bool	getState() const;
protected:
	std::string _name;
	bool	_state;	
};
