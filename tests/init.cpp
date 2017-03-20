#include <matrix.hpp>
#include <catch.hpp>
#include <iostream>

using namespace std;

SCENARIO("coplex init", "[init]"){
  Complex r, i;
  REQUARE (r.real() == 0);
  REQUARE (i.imaginary() == 0);
}

SCENARIO("params init", "[init with params]") 
{
	int init = 2;
	Complex r(init);
  Complex i(init);
	REQUIRE(r.real() == 2);
	REQUIRE(i.imaginary() == 2);
}
