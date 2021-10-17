/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** Phaser
*/

#ifndef PHASER_HPP_
#define PHASER_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Sounds.hpp"

class Phaser {
    public:
        enum AmmoType
        {
            REGULAR,
            PLASMA,
            ROCKET
        };
        Phaser(const int maxAmmo = 20, AmmoType type = REGULAR) noexcept;
        ~Phaser() = default;

        int getCurrentAmmos() const noexcept;
        void addAmmo(AmmoType type) noexcept;
        void changeType(AmmoType newType) noexcept;
        void ejectClip() noexcept;
        void fire() noexcept;
        void reload() noexcept;

    private:
        static const int Empty = 0;
        int _maxAmmo;
        AmmoType _type;
        std::vector<AmmoType> _magazine;
        Sounds _sound;
};

#endif /* !PHASER_HPP_ */
