/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/


#ifndef TOY_HPP_
#define TOY_HPP_

#include <string>
#include <iostream>
#include "Picture.hpp"

class Toy {
	public:
		enum ToyType_e {
			BASIC_TOY,
			ALIEN,
			BUZZ,
			WOODY
		};
		Toy();
		Toy(ToyType_e type, std::string name, const std::string &file);
		~Toy();
		ToyType_e getType() const {return (_type);}
		std::string getName() const {return (_name);}
		void setName(std::string name){_name = name;}
		bool setAscii(const std::string &file);
		std::string getAscii() const {return (_picture->data);}
	protected:
		ToyType_e _type;
		std::string _name;
		Picture *_picture;
};

#endif /* !TOY_HPP_ */
