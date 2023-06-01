// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch_amalgamated.hpp"

#include "../Tiempo.hpp" // Tiempo implementations

// =====================
// tests for exercise 1
// ---------------------

TEST_CASE("Ex1", "[Suma tiempo con tiempo función miembro]"){
    Tiempo t1(10,30);
    Tiempo t2(14,45);
    Tiempo t3(20,0);
    Tiempo t4(1,5);
    Tiempo t5 = t1 + t2;
    Tiempo t6 = t3 + t4;
    SECTION("Suma tiempo con tiempo función miembro")  
    {
        REQUIRE(t5.getHora() == 25);
        REQUIRE(t5.getMinu() == 15);
        REQUIRE(t6.getHora() == 21);
        REQUIRE(t6.getMinu() == 5);
    }
}

// =====================
// tests for exercise 2
// ---------------------

TEST_CASE("Ex2", "[Suma tiempo con minutos función miembro]"){
    Tiempo t2(14,45);
    Tiempo t3 = t2 + 10;
    Tiempo t4 = t2 + 100;
    SECTION("Suma tiempo con minutos función miembro")  
    {
        REQUIRE(t3.getHora() == 14);
        REQUIRE(t3.getMinu() == 55);
        REQUIRE(t4.getHora() == 16);
        REQUIRE(t4.getMinu() == 25);
    }
}

TEST_CASE("Ex3", "[Suma minutos con tiempo función friend]"){
    Tiempo t2(14,45);
    Tiempo t3 = 45 + t2;
    Tiempo t4 = 90 + t2;
    SECTION("Suma minutos con tiempo función friend")  
    {
        REQUIRE(t3.getHora() == 15);
        REQUIRE(t3.getMinu() == 30);
        REQUIRE(t4.getHora() == 16);
        REQUIRE(t4.getMinu() == 15);
    }
}

TEST_CASE("Ex4", "[Incrementa (preincremento) 1 minuto función miembro]"){
    Tiempo t2(14,45);
    ++t2;
    Tiempo t3(20, 59);
    ++t3;
    SECTION("Incrementa (preincremento) 1 minuto función miembro")  
    {
        REQUIRE(t3.getHora() == 21);
        REQUIRE(t3.getMinu() == 0);
        REQUIRE(t2.getHora() == 14);
        REQUIRE(t2.getMinu() == 46);
    }
}

TEST_CASE("Ex5", "[Decrementa 1 minuto función friend]"){
    Tiempo t2(0,0);
    --t2;
    Tiempo t3(20, 0);
    --t3;
    SECTION("Decrementa 1 minuto función friend")  
    {
        REQUIRE(t3.getHora() == 19);
        REQUIRE(t3.getMinu() == 59);
        REQUIRE(t2.getHora() == 0);
        REQUIRE(t2.getMinu() == 0);
    }
}

TEST_CASE("Ex6", "[Agrega el tiempo recibido a este objeto función miembro]"){
    Tiempo t2(10,59);
    Tiempo t3(20,1);
    t2 += t3;
    SECTION("Agrega el tiempo recibido a este objeto función miembro")  
    {
        REQUIRE(t2.getHora() == 31);
        REQUIRE(t2.getMinu() == 0);
    }
}

TEST_CASE("Ex7", "[Mayor que tiempo con tiempo, función miembro]"){
    Tiempo t2(10,59);
    Tiempo t3(20,1);
    t2 += t3;
    SECTION("MAyor que tiempo con tiempo, función miembro")  
    {
        REQUIRE((t2 > t3) == true);
        REQUIRE((t3 > t2) == false);
    }
}

TEST_CASE("Ex8", "[Flujo de salida función friend]"){
    Tiempo t2(14,1);
    SECTION("Flujo de salida función friend")  
    {
        std::cout << t2 <<std::endl;
        REQUIRE(true);
    }
}