/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#ifndef BUZZ_HPP
#define BUZZ_HPP

#include "Toy.hpp"

class Buzz : public Toy
{
public:
    Buzz(const std::string &name);
    Buzz(const std::string &name, const std::string &file);
    void speak(const std::string &arg) override;
};

#endif 

