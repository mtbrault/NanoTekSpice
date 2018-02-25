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
#include <memory>

#include "Clock.hpp"
#include "False.hpp"
#include "True.hpp"
#include "Input.hpp"
#include "Output.hpp"
#include "Factory.hpp"

class	Parser {
public:
	Parser(const std::string &fname);
	virtual ~Parser();

	void	parsing_manager();
	void	parsing_chipsets(std::vector<std::string> chipsets);
	void	parsing_links(std::vector<std::string> links);
	void	set_MapArgs(std::map<std::string, std::size_t> input_args);
/*	std::map<std::string, std::unique_ptr<nts::IComponent>>	getInput() const;
	std::map<std::string, std::unique_ptr<nts::IComponent>>	getOutput() const;
	std::map<std::string, std::unique_ptr<nts::IComponent>>	getClock() const;
	std::map<std::string, std::unique_ptr<nts::IComponent>>	getTrue() const;
	std::map<std::string, std::unique_ptr<nts::IComponent>>	getFalse() const;
	std::map<std::string, std::unique_ptr<nts::IComponent>>	getComponent() const;
*/
protected:
	std::string _fname;
	std::map<std::string, std::size_t> _input_args;
	std::map<std::string, std::unique_ptr<nts::IComponent>> _input;
	std::map<std::string, std::unique_ptr<nts::IComponent>> _output;
	std::map<std::string, std::unique_ptr<nts::IComponent>> _clock;
	std::map<std::string, std::unique_ptr<nts::IComponent>> _true;
	std::map<std::string, std::unique_ptr<nts::IComponent>> _false;
	std::map<std::string, std::unique_ptr<nts::IComponent>> _component;
};
