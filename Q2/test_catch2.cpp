#include "buffer.hpp"
#include <catch2/catch_test_macros.hpp>


TEST_CASE( "Testing buffer" ) {

    Buffer<int> b(3);
    b.add(1);
    b.add(2);
    b.add(3);
    b.add(35);

    auto itens = b.show();
    vector<int> v(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    REQUIRE(itens ==  v);


    int removed;
    if (b.remove(removed))
        REQUIRE(removed ==  1);

    if (b.remove(removed))
        REQUIRE(removed ==  2);

    if (b.remove(removed))
        REQUIRE(removed ==  3);

    REQUIRE(b.remove(removed) == false);

    b.add(35);
    itens = b.show();

    v.clear();
    v.push_back(35);

    REQUIRE(itens ==  v);
}