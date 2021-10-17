/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** KreogCom
*/

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial) noexcept :
    _next(0), _prev(0), _serial(serial), _x(x), _y(y)
{
    std::cout << "KreogCom " << _serial << " initialized" << std::endl;
}

KreogCom::~KreogCom()
{
    KreogCom *tmp = NULL;

    if (_next) _next->_prev = _prev;
    if (_prev) _prev->_next = _next;
    std::cout << "KreogCom " << _serial << " shutting down" << std::endl;
}

KreogCom *KreogCom::getCom() const noexcept
{
    return (_next);
}

void KreogCom::addCom(int x, int y, int serial) noexcept {
    KreogCom *tmp = new KreogCom(x, y, serial);

    if (!this->_next) {
        tmp->_prev = this;
        this->_next = tmp;
    } else {
        tmp->_next = this->_next;
        tmp->_prev = this;
        this->_next = tmp;
    }
}

void KreogCom::locateSquad() const noexcept {
    for (KreogCom *current = _next; current; current = current->_next)
        current->ping();
    ping();
}

void KreogCom::ping() const noexcept {
    std::cout << "KreogCom " << _serial << " currently at " << _x << " " << _y << std::endl;
}

void KreogCom::removeCom() noexcept
{
    KreogCom *del = NULL;

    if (_next) {
        del = _next->_next;
        delete _next;
        _next = del;
        if (del)
            del->_prev = this;
    }
}