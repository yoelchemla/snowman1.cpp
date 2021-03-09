/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <yoel>
 * 
 * Date: 2021-03-09
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
using namespace std;

TEST_CASE("Good snowman code")
{
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(21211412) == string(" ___ \n .....\n \n (o,.)\n<( : )\n (\" \")"));
    CHECK(snowman(44444444) == string(" ___\n (_*_)\n(- -)\n(  )"));
    CHECK(snowman(33333333) == string("   _\n /_\\\n(O_O)\n/(> <)\\\n (___)"));
    CHECK(snowman(22222222) == string("___ \n ..... \n(.o.)\n \\( : )/\n( : )"));
    CHECK(snowman(11111111) == string("      \n _===_\n (.,.) \n<( : )>\n ( : )"));
    CHECK(snowman(31421312) == string("   _  \n  /_\\ \n (-,o) \n<( : )\\\n (\" \")"));
    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(12311111) == string("      \n _===_\n (O..) \n<( : )>\n ( : )"));
    CHECK(snowman(44332211) == string("  ___ \n (_*_)\n\\(O O)/\n ( : ) \n ( : )"));
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n (O,.) \n/(> <)>\n ( : )"));
    CHECK(snowman(34332212) == string("   _  \n  /_\\ \n\\(O O)/\n ( : ) \n (\" \")"));
    CHECK(snowman(11114111) == string("      \n _===_\n (.,.) \n ( : )>\n ( : )"));
    CHECK(snowman(43242312) == string("  ___ \n (_*_)\n\\(o_-) \n ( : )\\\n (\" \")"));
    CHECK(snowman(42424222) == string("  ___ \n (_*_)\n (-.o)/\n (] [) \n (\" \")"));
    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(12341424) == string("      \n _===_\n (O.-) \n<(] [) \n (   )"));
    CHECK(snowman(12121212) == string("      \n _===_\n (..o)/\n<( : ) \n (\" \")"));
    CHECK(snowman(12341111) == string("      \n _===_\n (O.-) \n<( : )>\n ( : )"));
    CHECK(snowman(33333433) == string("   _  \n  /_\\ \n (O_O) \n/(> <) \n (___)"));
    CHECK(snowman(31421322) == string("   _  \n  /_\\ \n (-,o) \n<(] [)\\\n (\" \")"));

}

TEST_CASE("Bad snowman code")
{
  //the digit isn't legal x>4 || x=0
    CHECK_THROWS(snowman(11116111));
    CHECK_THROWS(snowman(12121215));
    CHECK_THROWS(snowman(35412124));
    CHECK_THROWS(snowman(12431117));
    CHECK_THROWS(snowman(55022971));
    CHECK_THROWS(snowman(77777777));
    CHECK_THROWS(snowman(66666666));
    CHECK_THROWS(snowman(55555555));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(17765409));
    CHECK_THROWS(snowman(87987798));
    CHECK_THROWS(snowman(88888888));
    CHECK_THROWS(snowman(99999999));
 
 // less than 8 digit
    CHECK_THROWS(snowman(1234123));
    CHECK_THROWS(snowman(123412));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(1111111));
    CHECK_THROWS(snowman(222222));
    CHECK_THROWS(snowman(33333));
    CHECK_THROWS(snowman(4444444));
    CHECK_THROWS(snowman(3));
    CHECK_THROWS(snowman(111441));
    CHECK_THROWS(snowman(222333));
    CHECK_THROWS(snowman(2223241));
    CHECK_THROWS(snowman(132321));
 
 //negative 8 digit
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-22222222));
    CHECK_THROWS(snowman(-33333333));
    CHECK_THROWS(snowman(-44444444));
    CHECK_THROWS(snowman(-12341222));
    CHECK_THROWS(snowman(-12341222));
    CHECK_THROWS(snowman(-12341212));
    CHECK_THROWS(snowman(-12341332));
    CHECK_THROWS(snowman(-13241212));

//more than 8 digit
    CHECK_THROWS(snowman(123412111));
    CHECK_THROWS(snowman(444444444));
    CHECK_THROWS(snowman(123222213));
    CHECK_THROWS(snowman(432113224));
    CHECK_THROWS(snowman(123412342));
    CHECK_THROWS(snowman(123413221));
    CHECK_THROWS(snowman(123412341));
    CHECK_THROWS(snowman(214213224));
    CHECK_THROWS(snowman(122333221));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(222222222));
    CHECK_THROWS(snowman(333321333));
    CHECK_THROWS(snowman(221421424));
    CHECK_THROWS(snowman(223433112));
    CHECK_THROWS(snowman(444333221));
    CHECK_THROWS(snowman(111332111));
    CHECK_THROWS(snowman(222224231));

//combinatiaon lllegal
    CHECK_THROWS(snowman(000000000));
    CHECK_THROWS(snowman(222290));
    CHECK_THROWS(snowman(-47633332));
    CHECK_THROWS(snowman(113355790));
    CHECK_THROWS(snowman(-55555555));
    CHECK_THROWS(snowman(-67));
    CHECK_THROWS(snowman(22792));
    CHECK_THROWS(snowman(7777));
    CHECK_THROWS(snowman(999999999));
    CHECK_THROWS(snowman(6));
    CHECK_THROWS(snowman(0));
}


