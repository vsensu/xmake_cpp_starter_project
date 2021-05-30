#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include "hello.h"

TEST_CASE("1 is equal to 1 (success)", "[tag1]") {
  REQUIRE(1 == 1);
}

TEST_CASE("1 is not equal to 0 (fail)", "[tag1]") {
  REQUIRE(1 == 0);
}

TEST_CASE("1 + 1 = 2(success)", "[tag2]") {
  REQUIRE(add(1, 1) == 2);
}
