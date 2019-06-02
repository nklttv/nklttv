#pragma once
#include <iostream>
#include <string>

class spell{
public:
	std::string name;
	int dhp, dmp;
	spell(std::string nName, int nDhp, int nDmp);
};