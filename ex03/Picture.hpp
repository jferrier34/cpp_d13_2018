/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#ifndef PICTURE_HPP
#define PICTURE_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Picture
{
public:
    Picture() : data("") {}
    Picture(const std::string &file);
    Picture(const Picture &p) : data(p.data) {}
    ~Picture() = default;
    bool getPictureFromFile(const std::string &file);
    Picture &operator=(const Picture &p);
    std::string data;
};

#endif

