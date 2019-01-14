/*
** EPITECH PROJECT, 2019
** Toy.hpp
** File description:
** ex00
*/

#ifndef _TOY_HPP_
#define _TOY_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Picture.hpp"

	class Toy {
		public:
		enum ToyType {
			BASIC_TOY,
			ALIEN,
		};
		Toy();
		Toy(ToyType type, const std::string &name, const std::string &file);
		~Toy();

                Toy(Toy const &this_toy);
                Toy &operator=(Toy const &this_toy);

		std::string getName() const;
		ToyType getType() const;
		std::string getAscii() const;
		void setName(const std::string &name);
		void setAscii(const std::string &file);

		protected:

		ToyType _type;
		std::string _name;
		Picture *_picture;
	};

        
#endif