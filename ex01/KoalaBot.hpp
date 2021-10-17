/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "Parts.hpp"

class KoalaBot {
    public:
        KoalaBot(const std::string& serial = "Bob-01") noexcept;
        ~KoalaBot() = default;

        bool status() const noexcept;
        void informations() const noexcept;
        void setParts(Arms& arms) noexcept;
        void setParts(Head& head) noexcept;
        void setParts(Legs& legs) noexcept;
        void swapParts(Arms& arms) noexcept;
        void swapParts(Head& head) noexcept;
        void swapParts(Legs& legs) noexcept;
    private:
        Arms _arms;
        Head _head;
        Legs _legs;
        std::string _serial;
};

#endif /* !KOALABOT_HPP_ */