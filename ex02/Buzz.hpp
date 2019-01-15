/*
** EPITECH PROJECT, 2019
** Buzz.hpp
** File description:
** ex02
*/

#ifndef _BUZZ_HPP_
#define _BUZZ_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Toy.hpp"

class Buzz : public Toy {
        public:
    Buzz(std::string const &_name);
    Buzz(std::string const &_name, std::string const &file);
        ~Buzz();
};

#endif
