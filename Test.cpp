#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;

TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of letters v,w t,d and lower-case and upper-case") {
    string text = "we have to get 100 in the tests";
    CHECK(find(text, "Have") == string("have"));
    CHECK(find(text, "ve") == string("we"));
    CHECK(find(text, "ged") == string("get"));
    CHECK(find(text, "geD") == string("get"));
    
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "cpp is better then java";
    CHECK(find(text, "cPP") == string("cpp"));
    CHECK(find(text, "cff") == string("cpp"));
    CHECK(find(text, "petter") == string("better"));
    CHECK(find(text, "jaia") == string("java"));
    
}

TEST_CASE("Test replacement of lower-case and upper-case and s,z and o,u") {
    string text = "size compression";
    CHECK(find(text, "Size") == string("size"));
    CHECK(find(text, "sIZE") == string("size"));
    CHECK(find(text, "zzie") == string("size"));
    CHECK(find(text, "Zzie") == string("jsize"));
    CHECK(find(text, "comprezzion") == string("compression"));
    CHECK(find(text, "Compression") == string("compression"));
    CHECK(find(text, "size") == string("size"));
    CHECK(find(text, "cumpression") == string("compression"));
   
}

TEST_CASE("Test replacement of lower-case and upper-case and c,k,q") {
    string text = "cyndaquil";
    CHECK(find(text, "CYndaquil") == string("cyndaquil"));
    CHECK(find(text, "kyndaquil") == string("cyndaquil"));
    CHECK(find(text, "Kyndaquil") == string("cyndaquil"));
    CHECK(find(text, "qyndaquil") == string("cyndaquil"));
    CHECK(find(text, "Qyndaquil") == string("cyndaquil"));
    CHECK(find(text, "cyndakuil") == string("cyndaquil"));
    CHECK(find(text, "cyndaKuil") == string("cyndaquil"));
    CHECK(find(text, "cynDaquil") == string("cyndaquil"));
    
}
TEST_CASE("Test replacement of y and v"){

    string text = "The war diminished the vitality of the industry.";
    CHECK(find(text, "vitality") == string("vitality"));
    CHECK(find(text, "yitality") == string("vitality"));
    CHECK(find(text, "vitalitv") == string("vitality"));
    CHECK(find(text, "yitalitv") == string("vitality"));
    CHECK(find(text, "VitaLity") == string("vitality"));
    CHECK(find(text, "YitalitV") == string("vitality"));
    CHECK(find(text, "VItaLiTv") == string("vitality"));
    CHECK(find(text, "YiTalitV") == string("vitality"));
}

TEST_CASE("Test replacement of lower-case and upper-case and b,p and o,u") {
    string text = "only bibi";
    CHECK(find(text, "bibI") == string("bibi"));
    CHECK(find(text, "BiBi") == string("bibi"));
    CHECK(find(text, "bipi") == string("bibi"));
    CHECK(find(text, "pibi") == string("bibi"));
    CHECK(find(text, "unly") == string("only"));
    CHECK(find(text, "Unly") == string("only"));
    CHECK(find(text, "Only") == string("only"));
    CHECK(find(text, "ONly") == string("only"));
}

TEST_CASE("Test replacement of lower-case and upper-case and b,p and o,u") {
    string text = "good";
    CHECK(find(text, "Good") == string("good"));
    CHECK(find(text, "gOOd") == string("good"));
    CHECK(find(text, "gooD") == string("good"));
    CHECK(find(text, "guud") == string("good"));
    CHECK(find(text, "jood") == string("good"));
    CHECK(find(text, "Jood") == string("good"));
    CHECK(find(text, "juod") == string("good"));
    CHECK(find(text, "juud") == string("good"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case and y,i and z,s and w,v and t,d") {
    string text = "winter is comming";
    CHECK(find(text, "iz") == string("is"));
    CHECK(find(text, "iS") == string("is"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "vinter") == string("winter"));
    CHECK(find(text, "Vinter") == string("winter"));
    CHECK(find(text, "wiNter") == string("winter"));
    CHECK(find(text, "wInter") == string("winter"));
    CHECK(find(text, "wynter") == string("winter"));
    CHECK(find(text, "winter") == string("winter"));
    CHECK(find(text, "winder") == string("winter"));
    CHECK(find(text, "comminj") == string("comming"));
    CHECK(find(text, "coMMing") == string("comming"));
    CHECK(find(text, "cOmming") == string("comming"));
    CHECK(find(text, "Comming") == string("comming"));
    CHECK(find(text, "commyng") == string("comming"));
    CHECK(find(text, "comMYng") == string("comming"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case and y,i and z,s and w,v and t,d") {
    string text = "winter is here";
    CHECK(find(text, "iz") == string("is"));
    CHECK(find(text, "iS") == string("is"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "vinter") == string("winter"));
    CHECK(find(text, "Vinter") == string("winter"));
    CHECK(find(text, "wiNter") == string("winter"));
    CHECK(find(text, "wInter") == string("winter"));
    CHECK(find(text, "wynter") == string("winter"));
    CHECK(find(text, "winter") == string("winter"));
    CHECK(find(text, "winder") == string("winter"));
    CHECK(find(text, "here") == string("here"));
    CHECK(find(text, "Here") == string("here"));
    CHECK(find(text, "herE") == string("here"));
    CHECK(find(text, "heRe") == string("here"));
    CHECK(find(text, "heRE") == string("here"));
    CHECK(find(text, "Here") == string("here"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case and y,i and z,s and w,v and t,d") {
    string text = "winter is here";
    CHECK(find(text, "iz") == string("is"));
    CHECK(find(text, "iS") == string("is"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "vinter") == string("winter"));
    CHECK(find(text, "Vinter") == string("winter"));
    CHECK(find(text, "wiNter") == string("winter"));
    CHECK(find(text, "wInter") == string("winter"));
    CHECK(find(text, "wynter") == string("winter"));
    CHECK(find(text, "winter") == string("winter"));
    CHECK(find(text, "winder") == string("winter"));
    CHECK(find(text, "here") == string("here"));
    CHECK(find(text, "Here") == string("here"));
    CHECK(find(text, "herE") == string("here"));
    CHECK(find(text, "heRe") == string("here"));
    CHECK(find(text, "heRE") == string("here"));
    CHECK(find(text, "Here") == string("here"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case and y,i and z,s and w,v and t,d") {
    string text = "winter is here";
    CHECK(find(text, "iz") == string("is"));
    CHECK(find(text, "iS") == string("is"));
    CHECK(find(text, "ys") == string("is"));
    CHECK(find(text, "vinter") == string("winter"));
    CHECK(find(text, "Vinter") == string("winter"));
    CHECK(find(text, "wiNter") == string("winter"));
    CHECK(find(text, "wInter") == string("winter"));
    CHECK(find(text, "wynter") == string("winter"));
    CHECK(find(text, "winter") == string("winter"));
    CHECK(find(text, "winder") == string("winter"));
    CHECK(find(text, "here") == string("here"));
    CHECK(find(text, "Here") == string("here"));
    CHECK(find(text, "herE") == string("here"));
    CHECK(find(text, "heRe") == string("here"));
    CHECK(find(text, "heRE") == string("here"));
    CHECK(find(text, "Here") == string("here"));
    /* Add more checks here */
}


