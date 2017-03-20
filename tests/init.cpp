#include <complex.hpp>
#include <catch.hpp>

SCENARIO("coplex init", "[init]"){
	complex num_1(0, 0);
	REQUIRE (num_1.r() == 0);
	REQUIRE (num_1.i() == 0);
}

SCENARIO("params init", "[init with params]") 
{
	complex num_1(2, 2);
	REQUIRE(num_1.r() == 2);
	REQUIRE(num_1.i() == 2);
}
