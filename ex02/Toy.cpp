/*
** EPITECH PROJECT, 2019
** Toy.cpp
** File description:
** ex02
*/

#include "Toy.hpp"

Toy::Toy(): _type(BASIC_TOY),_name("toy"),_picture(new Picture())
{
}

Toy::~Toy()
{
}

Toy::Toy(Toy::ToyType_e type, std::string name, const std::string &file): _type(type), _name(name), _picture(new Picture(file))
{
}

bool Toy::setAscii(const std::string &file)
{
    return (_picture->getPictureFromFile(file));
}

