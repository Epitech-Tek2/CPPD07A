/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Parts
*/

#include <iostream>
#include <string>
#include <fstream>
#include "Parts.hpp"

Entity::Entity(bool functionnal, const std::string& serial, const std::string& type) noexcept :
    _functionnal(functionnal), _serial(serial), _type(type) {};
Arms::Arms(const std::string& serial, bool functionnal) noexcept : Entity(functionnal, serial, "Arms") {}
Legs::Legs(const std::string& serial, bool functionnal) noexcept : Entity(functionnal, serial, "Legs") {}
Head::Head(const std::string& serial, bool functionnal) noexcept : Entity(functionnal, serial, "Head") {}

std::string Entity::serial() const noexcept {
    return (_serial);
}

bool Entity::isFunctionnal() const noexcept {
    return (_functionnal);
}

void Entity::informations() const noexcept {
    std::cout << "\t[Parts] " + _type + " " + _serial + " status : " + (_functionnal ? "OK" : "KO") << std::endl;
}