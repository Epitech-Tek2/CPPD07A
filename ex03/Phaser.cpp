/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Phaser
*/

#include "Phaser.hpp"
#include "Sounds.hpp"

#define ERASE(_magazine, ...) _magazine.erase(__VA_ARGS__)

Phaser::Phaser(const int maxAmmo, AmmoType type) noexcept :
_maxAmmo(maxAmmo), _type(type)
{
    for (; _maxAmmo != (int)_magazine.size(); _magazine.push_back(_type));
}

void Phaser::fire() noexcept
{
    if (_magazine.empty()) std::cout << "Clip empty, please relead" << std::endl;
    if (_magazine[0] == REGULAR) std::cout << _sound.Regular << std::endl;
    if (_magazine[0] == PLASMA) std::cout << _sound.Plasma << std::endl;
    if (_magazine[0] == ROCKET) std::cout << _sound.Rocket << std::endl;
    ERASE(_magazine, _magazine.begin());
}

void Phaser::ejectClip() noexcept
{
    ERASE(_magazine, _magazine.begin(), _magazine.end());
}

void Phaser::changeType(AmmoType type) noexcept
{
    std::cout << "Switching ammo to type: ";
    if (type == REGULAR) std::cout << "regular" << std::endl;
    if (type == PLASMA) std::cout << "plasma" << std::endl;
    if (type == ROCKET) std::cout << "rocket" << std::endl;
}

void Phaser::reload() noexcept
{
    std::cout << "Reloading..." << std::endl;
    for (; _maxAmmo != (int)_magazine.size(); _magazine.push_back(_type));
}

void Phaser::addAmmo(AmmoType type) noexcept
{
    if (_maxAmmo != (int)_magazine.size()) _magazine.push_back(type);
    else std::cout << "Clip full" << std::endl;
}

int Phaser::getCurrentAmmos() const noexcept
{
    return (_magazine.size());
}