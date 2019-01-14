/*
** EPITECH PROJECT, 2019
** Woody.cpp
** File description:
** ex02
*/

#include "Woody.hpp"
#include "Picture.hpp"

Woody::Woody()
{
}

Woody::Woody(const std::string &name, const std::string &file) : Toy(Toy::BUZZ, name, file) 
{
}

Woody::~Woody()
{
}

