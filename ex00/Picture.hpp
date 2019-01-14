/*
** EPITECH PROJECT, 2019
** Picture.hpp
** File description:
** ex00
*/

#ifndef _PICTURE_HPP_
#define _PICTURE_HPP_


#include <iostream>
#include <fstream>
#include <string>

class Picture {
	public:
                std::string _data;
                Picture();
                ~Picture();
                Picture(const std::string &file);
                bool getPictureFromFile(const std::string &file);
};


#endif