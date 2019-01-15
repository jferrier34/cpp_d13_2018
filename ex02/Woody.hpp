/*
** EPITECH PROJECT, 2019
** Woody.cpp
** File description:
** ex02
*/


#ifndef WOODY_HPP_
#define WOODY_HPP_

#include "Toy.hpp"

class Woody : public Toy{
	public:
	  Woody(std::string name, const std::string &file = "woody.txt");
    ~Woody();
};

#endif
