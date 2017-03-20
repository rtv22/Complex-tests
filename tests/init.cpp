#include <matrix.hpp>
#include <catch.hpp>
#include <iostream>

using namespace std;

SCENARIO("coplex init", "[init]"){
  Complex num_1;
  REQUARE (num_1.real() == 0);
  REQUARE (num_1.imaginary() == 0);
}

SCENARIO("params init", "[init with params]") 
{
	int init = 2;
	Complex num_1(init);
	REQUIRE(num_1.r() == 2);
	REQUIRE(num_1.i() == 2);
}
