/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(const std::string& serial) noexcept : _serial(serial) {}

bool KoalaBot::status() const noexcept {
    return (_arms.isFunctionnal() && _legs.isFunctionnal() && _head.isFunctionnal());
}

void KoalaBot::informations() const noexcept {
    std::cout << "[KoalaBot] " + _serial << std::endl;
    _arms.informations();
    _legs.informations();
    _head.informations();
}

void KoalaBot::setParts(Arms& arms) noexcept {
    this->_arms = arms;
}

void KoalaBot::setParts(Head& head) noexcept {
    this->_head = head;
}

void KoalaBot::setParts(Legs& legs) noexcept {
    this->_legs = legs;
}

void KoalaBot::swapParts(Arms& arms) noexcept {
    Arms tmp = _arms;

    _arms = arms;
    arms = tmp;
}

void KoalaBot::swapParts(Head& head) noexcept {
    Head tmp = _head;

    _head = head;
    head = tmp;
}

void KoalaBot::swapParts(Legs& legs) noexcept {
    Legs tmp = _legs;

    _legs = legs;
    legs = tmp;
}