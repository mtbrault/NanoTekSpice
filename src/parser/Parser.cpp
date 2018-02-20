
//
// EPITECH PROJECT, 2018
// cpp_nanotekspice
// File description:
// Parser file
//

#include <sstream>
#include "Parser.hpp"

Parser::Parser(const std::string &fname)
	: _fname(fname)
{
}

Parser::~Parser()
{
}

void epur(std::string &s)
{
	bool space = false;
	auto p = s.begin();
	for (auto ch : s)
		if (std::isspace(ch)) {
			space = p != s.begin();
		} else {
			if (space) *p++ = ' ';
			*p++ = ch;
			space = false; }
	s.erase(p, s.end());
}

void	Parser::parsing_chipsets(std::vector<std::string> chipsets)
{
	std::string	type;
	std::string	name;
        std::size_t	index = 0;
	
	for (auto i = chipsets.begin(); i != chipsets.end(); ++i) {
	        epur(*i);
		index = (*i).find_first_of(' ');
	        name = (*i).substr(index + 1);
	        type = (*i).substr(0, index);
	        if (type == "input") {
			_input[name] = std::unique_ptr<Input>(new Input(name, 0));
		} else if (type == "output") {
			_output[name] = std::unique_ptr<Output>(new Output(name, 0));
		} else {
//			if ((_component[name] = f.createComponent(type, "")) == NULL)
//				throw std::overflow_error("Bad component");
		}
	}
}

void	Parser::parsing_links(std::vector<std::string> links)
{
	(void) links;
	return ;
}

void	Parser::parsing_manager()
{
	std::ifstream	File(_fname);
	std::string	line;
        bool	cpy_chipsets = false;
	bool	cpy_links = false;
	std::vector<std::string> chipsets;
	std::vector<std::string> links;

	if (!File.is_open()) {
		throw std::overflow_error("File cannot be open");
	}
	while (getline(File, line)) {
		if ((line.at(0) != '#' and line != ".chipsets:" and line.at(0) != '\n' and line == ".links:") and cpy_chipsets != true)
			throw std::overflow_error("syntax error" + line);
		if (line == ".chipsets:")
		        cpy_chipsets = true;
		if (line == ".links:")
		        cpy_links = true;
		if (cpy_chipsets == true && cpy_links == false && line != ".chipsets:" && line != ".links:")
			chipsets.push_back(line);
		if (cpy_chipsets == true && cpy_links == true && line != ".chipsets:" && line != ".links:")
		        links.push_back(line);
	}
	parsing_chipsets(chipsets);
}

void	nanotekspice(char **argv)
{
	Parser p(argv[1]);
	p.parsing_manager();
}

int	main(int argc, char **argv)
{
	(void) argc;
	if (argc == 2) {
		try {
			nanotekspice(argv);
		} catch(std::exception &err) {
			std::cout << err.what() << std::endl;
			return 84;
		}
		return 0;
	}
}
