#include <matrix.hpp>
#include <catch.hpp>

SCENARIO("coplex init", "[init]"){
  complex num_1;
  REQUARE (num_1.r() == 0);
  REQUARE (num_1.i() == 0);
}

SCENARIO("params init", "[init with params]") 
{
	int init = 2;
	complex num_1(init, init);
	REQUIRE(num_1.r() == 2);
	REQUIRE(num_1.i() == 2);
}
