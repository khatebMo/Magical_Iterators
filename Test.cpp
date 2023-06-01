#include <iostream>
#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;

TEST_CASE("Test addElement() method")
{
    MagicalContainer magical;
    CHECK_NOTHROW(magical.addElement(1));
    CHECK_NOTHROW(magical.addElement(3));
    CHECK_NOTHROW(magical.addElement(7));
    CHECK_NOTHROW(magical.addElement(6));
    CHECK_NOTHROW(magical.addElement(-10));
}
TEST_CASE("Test size() method")
{
    MagicalContainer magical;
    CHECK(magical.size() == 0);
    CHECK_NOTHROW(magical.addElement(2));
    CHECK_NOTHROW(magical.addElement(7));
    CHECK(magical.size() == 2);
    CHECK_NOTHROW(magical.removeElement(2));
    CHECK(magical.size() == 1);
    CHECK_NOTHROW(magical.removeElement(7));
    CHECK(magical.size() == 0);
}
TEST_CASE("Test removeElement()method")
{
    MagicalContainer magical;
    CHECK_NOTHROW(magical.addElement(1));
    CHECK_NOTHROW(magical.addElement(3));
    CHECK_NOTHROW(magical.addElement(7));
    CHECK_NOTHROW(magical.addElement(6));
    CHECK(magical.size() == 4);
    CHECK_NOTHROW(magical.removeElement(2));
    CHECK(magical.size() == 4);
    CHECK_NOTHROW(magical.removeElement(3));
    CHECK(magical.size() == 3);
    CHECK_NOTHROW(magical.removeElement(1));
    CHECK_NOTHROW(magical.removeElement(7));
    CHECK(magical.size() == 1);
}

TEST_CASE("test getElement()method")
{
    MagicalContainer magical;
    CHECK_NOTHROW(magical.getElements());
}

TEST_CASE("init Iterators"){
    MagicalContainer magical;
    CHECK_NOTHROW(magical.addElement(14));
    CHECK_NOTHROW(magical.addElement(17));
    CHECK_NOTHROW(magical.addElement(5));
    CHECK_NOTHROW(magical.addElement(2));

    CHECK_NOTHROW(MagicalContainer::AscendingIterator ascIter(magical));
    CHECK_NOTHROW(MagicalContainer::SideCrossIterator sidIter(magical));
    CHECK_NOTHROW(MagicalContainer::PrimeIterator priIter(magical));
}
