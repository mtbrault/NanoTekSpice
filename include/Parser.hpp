//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Parser header
//

#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <map>

#include "Input.hpp"
#include "Output.hpp"
#include "Clock.hpp"
#include "Factory.hpp"

class	Parser {
public:
	Parser(const std::string &fname);
	virtual ~Parser();

	void	parsing_manager();
	void	parsing_chipsets(std::vector<std::string> chipsets);
	void	parsing_links(std::vector<std::string> links);
protected:
	std::string _fname;
	std::map<const std::string, std::unique_ptr<Input>> _input;
	std::map<const std::string, std::unique_ptr<Output>> _output;
	std::map<const std::string, std::unique_ptr<nts::IComponent>> _component;
};
