##
## EPITECH PROJECT, 2021
## B-CPP-300-STG-3-1-CPPD17-clement.muth
## File description:
## Makefile
##

tests_run:
	g++ ex00/*.cpp ex01/*.cpp ex02/*.cpp tests/testP.cpp -o unit_tests --coverage -lcriterion
	- ./unit_tests