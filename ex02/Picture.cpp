/*
** EPITECH PROJECT, 2019
** Picture.hpp
** File description:
** ex02
*/

#include "Picture.hpp"

Picture::Picture()
{
    data = "";
}

Picture::~Picture()
{
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::string tmp;
      std::ifstream my_file(file);
        bool is_ok = true;
                if (my_file.is_open()) {
                        while (getline(my_file, tmp)) {
                                data = data + tmp + '\n';
                        }
                        my_file.close();
                } else {
		    is_ok = false;
                data = "ERROR";
                }
        return (is_ok);
}

Picture::Picture(const std::string &file)
{
    std::ifstream pic(file);
    std::string line;
    if(pic) {
        while (getline(pic, line, '\0'))
            data += line;
    } else {
        data = "ERROR";
    }
}
