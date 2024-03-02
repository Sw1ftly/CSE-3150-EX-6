#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <sstream> 
#include <fstream>
#include <vector>
#include "vector.h" 





TEST_CASE("int_vector constructors") {
    SUBCASE("Basic constructor") {
        int_vector v;
        CHECK(v.id == -1);
        CHECK(v.from == 0);
        CHECK(v.to == 0);
    }

    SUBCASE("Copy constructor") {
        int_vector original(1, 2, 3);
        int_vector copy = original;
        CHECK(copy.id == 1);
        CHECK(copy.from == 2);
        CHECK(copy.to == 3);
    }
}

TEST_CASE("File input handling") {

    SUBCASE("Empty file") {
        
        auto vectors = read_and_display_vectors("empty_test.txt");
        CHECK(vectors.empty()); 
    }
}