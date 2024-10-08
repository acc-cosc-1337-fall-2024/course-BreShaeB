#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Get Sales Tax"){
	REQUIRE(get_sales_tax_amount(10, 0.0675) == 0.675);
	REQUIRE(get_sales_tax_amount(20, 0.0675) == 1.35);
}

TEST_CASE("Test Get Tip Amount"){
	REQUIRE(get_tip_amount(20, 0.15) == 3);
	REQUIRE(get_tip_amount(20, 0.2) == 4);
}
