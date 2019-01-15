/*
** EPITECH PROJECT, 2019
** buzz.hpp
** File description:
** ex02
*/


#ifndef BUZZ_HPP_
#define BUZZ_HPP_

#include "Toy.hpp"

class Buzz : public Toy {
      public:
	   Buzz(std::string name, const std::string &file = "buzz.txt");
	   ~Buzz();
};

#endif
