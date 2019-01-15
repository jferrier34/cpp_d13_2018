/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#ifndef WOODY_HPP_INCLUDED
#define WOODY_HPP_INCLUDED

#include "Toy.hpp"

class Woody : public Toy
{
public:
    Woody(const std::string &name);
    Woody(const std::string &name, const std::string &file);
    ~Woody() = default;
    void speak(const std::string &arg);
};

#endif // WOODY_HPP_INCLUDED

