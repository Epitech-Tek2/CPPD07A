/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPD07A-clement.muth
** File description:
** testP
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../ex00/Skat.hpp"
#include "../ex01/KoalaBot.hpp"
#include "../ex02/KreogCom.hpp"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void call_allOutput()
{
    Skat s ("Junior", 5) ;
    std :: cout << "Soldier " << s . name () << std :: endl ;
    s . status () ;
    s . useStimPaks () ;
}

Test(testAllOutput, read_all_content, .init=redirect_all_stdout) {
    call_allOutput();
    cr_assert_stdout_eq_str("Soldier Junior\nSoldier Junior reporting 5 stimpaks remaining sir!\nTime to kick some ass and chew bubble gum.\n");
}

static void call_allOutput2()
{
    KoalaBot kb ;
    std :: cout << std :: boolalpha << kb . status () << std :: endl ;
    kb . informations () ;
}

Test(testex2, read_all_content, .init=redirect_all_stdout) {
    call_allOutput2();
    cr_assert_stdout_eq_str("true\n[KoalaBot] Bob-01\n\t[Parts] Arms A-01 status : OK\n\t[Parts] Legs L-01 status : OK\n\t[Parts] Head H-01 status : OK\n");
}

static void call_allOutput3()
{
    KreogCom k (42 , 42 , 101010) ;
    k . addCom (56 , 25 , 65) ;
    k . addCom (73 , 34 , 51) ;
    k . locateSquad () ;
    k . removeCom () ;
    k . removeCom () ;
}

Test(testex3, read_all_content, .init=redirect_all_stdout) {
    call_allOutput3();
    cr_assert_stdout_eq_str("KreogCom 101010 initialized\nKreogCom 65 initialized\nKreogCom 51 initialized\nKreogCom 51 currently at 73 34\nKreogCom 65 currently at 56 25\nKreogCom 101010 currently at 42 42\nKreogCom 51 shutting down\nKreogCom 65 shutting down\nKreogCom 101010 shutting down\n");
}