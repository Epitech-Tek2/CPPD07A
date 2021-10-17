/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Skat
*/

#ifndef SKAT_HPP_
#define SKAT_HPP_

#include <iostream>
#include <string>
#include <fstream>

class Skat {
    public:
        Skat(std::string name = "bob", int stimPaks = 15) noexcept;
        ~Skat() = default;
        std::string const& name() const noexcept;
        int& stimPaks() noexcept;
        void addStimPaks(unsigned int number) noexcept;
        void shareStimPaks(int number, int& stock) noexcept;
        void status() const noexcept;
        void useStimPaks() noexcept;

    private:
        const std::string &_name;
        int _stimPaks;
};

#endif /* !SKAT_HPP_ */