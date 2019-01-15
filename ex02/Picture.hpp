/*
** EPITECH PROJECT, 2019
** Picture.hpp
** File description:
** ex02
*/

#ifndef PICTURE_HPP_
#define PICTURE_HPP_

#include <string>
#include <iostream>
#include <fstream>

class Picture {
    public:
        std::string data;
	Picture();
	~Picture();
        bool getPictureFromFile(const std::string &file);
        Picture(const std::string &file);
};

#endif
