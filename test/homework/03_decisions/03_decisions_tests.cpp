#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.cpp"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Check Letter Grade Using If")
{
	REQUIRE(get_letter_grade_using_if(98) == 'A');
	REQUIRE(get_letter_grade_using_if(83) == 'B');
	REQUIRE(get_letter_grade_using_if(74) == 'C');
	REQUIRE(get_letter_grade_using_if(65) == 'D');
	REQUIRE(get_letter_grade_using_if(55) == 'F');
	REQUIRE(get_letter_grade_using_if(35) == 'F');
}

TEST_CASE("Check Letter Grade Using Switch")
{
	REQUIRE(get_letter_grade_using_switch(97) == 'A');
	REQUIRE(get_letter_grade_using_switch(84) == 'B');
	REQUIRE(get_letter_grade_using_switch(75) == 'C');
	REQUIRE(get_letter_grade_using_switch(66) == 'D');
	REQUIRE(get_letter_grade_using_switch(53) == 'F');
	REQUIRE(get_letter_grade_using_switch(33) == 'F');
}