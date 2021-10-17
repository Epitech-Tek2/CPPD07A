/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Skat
*/

#include "Skat.hpp"

Skat::Skat(std::string name, int stimPaks) noexcept : _name(name), _stimPaks(stimPaks) {};

int& Skat::stimPaks() noexcept
{
    return (_stimPaks);
}

std::string const& Skat::name() const noexcept
{
    return (_name);
}

void Skat::shareStimPaks(int number, int &stock) noexcept
{
    if (number <= _stimPaks) {
        stock += number;
        _stimPaks -= number;
        std::cout << "Keep the change." << std::endl;
    } else std::cout << "Don't be greedy" << std::endl;
}

void Skat::addStimPaks(unsigned int number) noexcept
{
    if (0 == number) std::cout << "Hey boya, did you forget something?" << std::endl;
    _stimPaks += number;
}

void Skat::useStimPaks() noexcept
{
    if (_stimPaks > 0) {
        _stimPaks--;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    } else std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status() const noexcept
{
    std::cout << "Soldier " + _name + " reporting " << _stimPaks << " stimpaks remaining sir!" << std::endl;
}