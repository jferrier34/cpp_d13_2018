/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#ifndef TOY_HPP
#define TOY_HPP

#include <memory>
#include "Picture.hpp"

class Toy
{
public:
    typedef enum{
        BASIC_TOY,
        ALIEN,
        BUZZ,
        WOODY
    }	ToyType;
    Toy() : _type(BASIC_TOY), _name("toy"), pic(new Picture) {}
    Toy(ToyType type, const std::string &name, const std::string &file) : _type(type), _name(name), pic(new Picture(file)) {}
    ToyType getType(void) const { return _type; }
        Toy(const Toy &t);
    ~Toy() = default;
    Toy &operator=(const Toy &t);
    const std::string &getName(void) const { return _name; }
    void setName(const std::string &name) { _name = name; }
    bool setAscii(const std::string &file) { return (pic->getPictureFromFile(file)); }
    virtual void speak(const std::string &);
    const std::string &getAscii(void) const { return (pic->data); }
protected:
    ToyType _type;
    std::string _name;
    Picture *pic;
};

#endif
