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
#include "Clock.hpp"
#include "Factory.hpp"

class	Parser {
public:
	Parser(const std::string &fname);
	virtual ~Parser();

	void	parsing_manager();
	void	parsing_chipsets(std::vector<std::string> chipsets);
	void	parsing_links(std::vector<std::string> links);
	void	set_MapArgs(std::map<const std::string, std::size_t> input_args);
	std::map<const std::string, std::unique_ptr<Input>>	getInputMap() const;
	std::map<const std::string, std::unique_ptr<Output>>	getOutputMap() const;
	std::map<const std::string, std::unique_ptr<nts::IComponent>>	getComponentMap() const;
	
protected:
	std::string _fname;
	std::map<const std::string, std::size_t> _input_args;
	std::map<const std::string, std::unique_ptr<Input>> _input;
	std::map<const std::string, std::unique_ptr<Output>> _output;
	std::map<const std::string, std::unique_ptr<Clock>> _clock;
	std::map<const std::string, std::unique_ptr<True>> _true;
	std::map<const std::string, std::unique_ptr<False>> _false;
	std::map<const std::string, std::unique_ptr<nts::IComponent>> _component;
};
