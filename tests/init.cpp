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

SCENARIO("copy", "[copy]") 
{
	complex A(1, 1);
	complex B(A);
	REQUIRE(B.r() == 1);
	REQUIRE(B.i() == 1);
}

SCENARIO("mult", "[oper*]") 
{
	complex A(1, 2);
	complex B(3, 4);
	complex C(-5, 10);
	REQUIRE(A*B==C);
}

SCENARIO("div", "oper/")
{
	complex A(3, 1);
	complex B(1, 1);
	complex C(2, -1);
	REQUIRE(A/B==C);
}

SCENARIO("+=", "[oper+=]")
{
	complex A(1, 1);
	complex B(1, 1);
	complex C(2, 2);
	REQUIRE((A+=B)==C);
}

SCENARIO("-=", "[oper-=]")
{
	complex A(2, 2);
	complex B(2, 2);
	complex C(0, 0);
	REQUIRE((A-=B)==C);
}

SCENARIO("*=", "[oper*=]")
{
	complex A(0, 0);
	complex B(0, 0);
	complex C(0, 0);
	REQUIRE((A*=B)==C);
}

SCENARIO("/=", "[oper/=]")
{
	complex A(1, 1);
	complex B(1, 1);
	complex C(1, 1);
	REQUIRE((A/=B)==C);
}

SCENARIO("=", "[oper=]")
{
	complex A(1, 1);
	complex B = A;
	REQUIRE(A == B);
}

SCENARIO("comp", "[oper==]")
{
	complex A(2, 2);
	complex B(2, 2);
	bool C;
	if (A == B)
		C = true;
	REQUIRE(C == true);
}
