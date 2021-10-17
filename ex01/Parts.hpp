/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Parts
*/

#ifndef PARTS_HPP_
#define PARTS_HPP_

#include <iostream>
#include <string>
#include <fstream>

class Entity
{
    public:
        Entity(bool functionnal, const std::string& serial, const std::string& _type) noexcept;
        ~Entity() = default;
        bool isFunctionnal() const noexcept;
        void informations() const noexcept;
    protected:
        bool _functionnal;
        std::string _serial;
        std::string _type;
        std::string serial() const noexcept;
};

class Arms : public Entity {
    public:
        Arms(const std::string& serial = "A-01", bool functionnal = true) noexcept;
        ~Arms() = default;
};

class Legs : public Entity {
    public:
        Legs(const std::string& serial = "L-01", bool functionnal = true) noexcept;
        ~Legs() = default;
};

class Head : public Entity {
    public:
        Head(const std::string& serial = "H-01", bool functionnal = true) noexcept;
        ~Head() = default;
};

#endif /* !PARTS_HPP_ */