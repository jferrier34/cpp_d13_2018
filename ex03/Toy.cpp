/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "Toy.hpp"
#include "Buzz.hpp"
#include "Woody.hpp"

Toy::Toy(const Toy &t)
{
    _type = t.getType();
    _name = t.getName();
    pic = new Picture;
    pic->data = t.getAscii();
}

Toy &Toy::operator=(const Toy &t)
{
    _type = t.getType();
    _name = t.getName();
    pic = new Picture;
    pic->data = t.getAscii();
    return (*this);
}


void Toy::speak(std::string const &arg) {
    std::cout << _name << " \"" << arg << "\""<<std::endl;
}
