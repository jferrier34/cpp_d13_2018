/*
** EPITECH PROJECT, 2019
** Woody.cpp
** File description:
** ex02
*/

#include "Woody.hpp"
#include "Picture.hpp"

/*Woody::Woody()
{
}

Woody::Woody(const std::string &name, const std::string &file) : Toy(Toy::BUZZ, name, file)

Woody::Woody(const std::string &name) : Toy(Toy::&name)
{
}

Woody::~Woody()
{
}

*/

Woody::Woody(const std::string &name)
{
    _type = Toy::WOODY;
    _name = name;
    _picture = new Picture("./woody.txt");
}

Woody::Woody(const std::string &name, const std::string &file)
{
    _type = Toy::WOODY;
    _name = name;
    _picture = new Picture(file);
}
