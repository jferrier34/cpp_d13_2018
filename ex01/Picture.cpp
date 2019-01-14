/*
** EPITECH PROJECT, 2019
** Picture.cpp
** File description:
** ex00
*/

#include "Picture.hpp"
#include "Toy.hpp"

std::string Picture::getData() const
{
        return (_data);
}

Picture::Picture(const Picture& this_picture)
{
        _data = this_picture.getData();
}

Picture &Picture::operator=(Picture const &this_picture)
{
        _data = this_picture.getData();
        return (*this);
}

bool Picture::getPictureFromFile(const std::string &file)
{
      std::string tmp;
      std::ifstream my_file(file);
      bool is_ok = true;
      if (my_file.is_open()) {
	  while (getline(my_file, tmp)) {
	      _data = _data + tmp + '\n';
	  }
	  my_file.close();
      } else {
	  is_ok = false;
	  _data = "ERROR";
      }
      return (is_ok);
}

Picture::Picture(const std::string &file)
{
	getPictureFromFile(file);
}

Picture::Picture()
{
	_data = "";
}

Picture::~Picture()
{
}
