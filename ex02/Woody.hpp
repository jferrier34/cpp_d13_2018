/*
** EPITECH PROJECT, 2019
** Woody.hpp
** File description:
** ex02
*/

#ifndef _WOODY_HPP_
#define _WOODY_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Toy.hpp"

class Woody : public Toy {
        public:
                Woody();
                Woody(const std::string &name, const std::string &file);
                ~Woody();      
};

#endif