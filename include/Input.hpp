//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Input header
//

#include <string>

class	Input {
public:
	Input(const std::string &name, bool state);
	virtual ~Input();

	std::string getName() const;
	bool	getState() const;
protected:
	std::string _name;
	bool	_state;	
};
