/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/


#include "Woody.hpp"

Woody::Woody(const std::string &name) : Toy(WOODY, name, "")
{
    _type = Toy::WOODY;
    _name = name;
    pic = new Picture("./woody.txt");
}

Woody::Woody(const std::string &name, const std::string &file) : Toy(WOODY, name, "Woody.txt")
{
    _type = Toy::WOODY;
    _name = name;
    pic = new Picture(file);
}

void Woody::speak(const std::string &arg)
{
    std::cout << "WOODY: " << _name << " \"" << arg << "\"\n";
}
