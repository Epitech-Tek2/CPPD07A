/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** KreogCom
*/

#ifndef KREOGCOM_HPP_
#define KREOGCOM_HPP_

#include <iostream>
#include <string>
#include <fstream>

class KreogCom {
    public:
        KreogCom(int x, int y, int serial) noexcept;
        ~KreogCom();

        KreogCom *getCom() const noexcept;
        void addCom(int x, int y, int serial) noexcept;
        void locateSquad() const noexcept;
        void ping() const noexcept;
        void removeCom() noexcept;

    private:
        KreogCom *_next;
        KreogCom *_prev;
        int _serial;
        int _x;
        int _y;

};

#endif /* !KREOGCOM_HPP_ */