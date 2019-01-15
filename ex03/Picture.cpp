/*
** EPITECH PROJECT, 2019
** $
** File description:
** 
*/

#include "Picture.hpp"

Picture::Picture(const std::string &file)
{
    this->getPictureFromFile(file);
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream f;
    std::stringstream strStream;
    f.open(file);
    if (!f.is_open()){
        data = "ERROR";
        return false;
    }
    strStream << f.rdbuf();
    data = strStream.str();
    return true;
}

Picture &Picture::operator=(const Picture &p)
{
    data = p.data;
    return (*this);
}
