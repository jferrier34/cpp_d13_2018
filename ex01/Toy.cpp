/*
** EPITECH PROJECT, 2019
** Picture.cpp
** File description:
** ex00
*/

#include "Toy.hpp"

Toy::Toy(const Toy& this_toy)
{
        _name = this_toy.getName();
	_type = this_toy.getType();
	_picture = new Picture;
        _picture->_data = this_toy.getAscii();
}

Toy &Toy::operator=(Toy const &this_toy)
{
        _name = this_toy.getName();
        _type = this_toy.getType();
        _picture->_data = this_toy.getAscii();
        return (*this);
}

Toy::Toy() : _type(ToyType::BASIC_TOY), _name("toy"), _picture(new Picture())
{
}

Toy::Toy(ToyType type, const std::string &name, const std::string &file) : _type(type), _name(name), _picture(new Picture(file))
{
}

Toy::~Toy()
{
}

std::string Toy::getName() const
{
	return (_name);
}

Toy::ToyType Toy::getType() const
{
	return (_type);
}

std::string Toy::getAscii() const
{
	return (_picture->_data);
}

bool Toy::setAscii(const std::string &file)
{
	return this->_picture->getPictureFromFile(file);
}

void Toy::setName(const std::string &name)
{
	_name = name;
}
