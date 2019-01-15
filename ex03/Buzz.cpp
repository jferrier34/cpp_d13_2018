/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/


#include "Buzz.hpp"

Buzz::Buzz(const std::string &name) : Toy(BUZZ, name, "")
{
    _type = Toy::WOODY;
    _name = name;
    pic = new Picture("./buzz.txt");
}

Buzz::Buzz(const std::string &name, const std::string &file) : Toy(BUZZ, name, "Buzz.txt")
{
    _type = Toy::WOODY;
    _name = name;
    pic = new Picture(file);
}

void Buzz::speak(const std::string &arg)
{
    std::cout << "BUZZ: " << _name << " \"" << arg << "\"\n";
}
