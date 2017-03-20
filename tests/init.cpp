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

SCENARIO("copy") 
{
	TComplex A(1, 1);
	TComplex B(A);
	REQUIRE(B.real_() == 1);
	REQUIRE(B.imaginary_() == 1);
}

SCENARIO("*") 
{
	TComplex A(2, 0);
	TComplex B(2, 0);
	TComplex C(4, 0);
	REQUIRE(A*B==C);
}

SCENARIO("/")
{
	TComplex A(4, 5);
	TComplex B(4, 5);
	TComplex C(1, 0);
	REQUIRE(A/B==C);
}

SCENARIO("+=")
{
	TComplex A(1, 1);
	TComplex B(1, 1);
	TComplex C(2, 2);
	REQUIRE((A+=B)==C);
}

SCENARIO("-=")
{
	TComplex A(2, 2);
	TComplex B(2, 2);
	TComplex C(0, 0);
	REQUIRE((A-=B)==C);
}

SCENARIO("*=")
{
	TComplex A(0, 0);
	TComplex B(0, 0);
	TComplex C(0, 0);
	REQUIRE((A*=B)==C);
}

SCENARIO("/=")
{
	TComplex A(1, 1);
	TComplex B(1, 1);
	TComplex C(1, 1);
	REQUIRE((A/=B)==C);
}

SCENARIO("=")
{
	TComplex A(1, 1);
	TComplex B = A;
	REQUIRE(A == B);
}

SCENARIO("==")
{
	TComplex A(2, 2);
	TComplex B(2, 2);
	bool C;
	if (A == B)
		C = true;
	REQUIRE(C == true);
}
