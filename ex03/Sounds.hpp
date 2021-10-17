/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Sounds
*/

#ifndef SOUNDS_HPP_
#define SOUNDS_HPP_

#include <iostream>
#include <string>
#include <fstream>

class Sounds {
    public:
        Sounds() = default;
        ~Sounds() = default;

        static const std::string Regular;
        static const std::string Plasma;
        static const std::string Rocket;
};

#endif /* !SOUNDS_HPP_ */