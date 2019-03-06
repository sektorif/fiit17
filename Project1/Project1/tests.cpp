#ifdef TEST
#define BOOST_TEST_MODULE example

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"



BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
	{

		BOOST_TEST(string_from_int(0) == string ("ноль"));
		BOOST_TEST(string_from_int(1) == string ("один"));
		BOOST_TEST(string_from_int(2) == string ("два"));
		BOOST_TEST(string_from_int(3) == string ("три"));
		BOOST_TEST(string_from_int(4) == string ("четыре"));
		BOOST_TEST(string_from_int(5) == string ("пять"));
		BOOST_TEST(string_from_int(6) == string ("шесть"));
		BOOST_TEST(string_from_int(7) == string ("семь"));
		BOOST_TEST(string_from_int(8) == string ("восемь"));
		BOOST_TEST(string_from_int(9) == string ("девять"));
		BOOST_TEST(string_from_int(10) == string ("десять"));
		BOOST_TEST(string_from_int(11) == string ("одиннадцать"));
		BOOST_TEST(string_from_int(12) == string ("двенадцать"));
		BOOST_TEST(string_from_int(13) == string ("тринадцать"));
		BOOST_TEST(string_from_int(14) == string ("четырнадцать"));
		BOOST_TEST(string_from_int(15) == string ("пятнадцать"));
		BOOST_TEST(string_from_int(16) == string ("шестнадцать"));
		BOOST_TEST(string_from_int(17) == string ("семнадцать"));
		BOOST_TEST(string_from_int(18) == string ("восемнадцать"));
		BOOST_TEST(string_from_int(19) == string ("девятнадцать"));

	}

BOOST_AUTO_TEST_CASE( test_case2 )
	{

		BOOST_TEST(number_less_100_to_string(20) == string ("двадцать"));
		BOOST_TEST(number_less_100_to_string(30) == string ("тридцать"));
		BOOST_TEST(number_less_100_to_string(41) == string ("сорок один"));
		BOOST_TEST(number_less_100_to_string(50) == string ("пятьдесят"));
		BOOST_TEST(number_less_100_to_string(60) == string ("шестьдесят"));
		BOOST_TEST(number_less_100_to_string(70) == string ("семьдесят"));
		BOOST_TEST(number_less_100_to_string(80) == string ("восемьдесят"));
		BOOST_TEST(number_less_100_to_string(90) == string ("девяносто"));
		BOOST_TEST(number_less_100_to_string(91) == string ("девяносто один"));

		
	}

BOOST_AUTO_TEST_CASE( test_case3 )
	{

		BOOST_TEST(objects_less_100_to_string(20," рубль"," рубля"," рублей") == string ("двадцать рублей"));
		BOOST_TEST(objects_less_100_to_string(1," рубль"," рубля"," рублей") == string ("один рубль"));
		BOOST_TEST(objects_less_100_to_string(2," рубль"," рубля"," рублей") == string ("два рубля"));
		BOOST_TEST(objects_less_100_to_string(5," рубль"," рубля"," рублей") == string ("пять рублей"));
		BOOST_TEST(objects_less_100_to_string(41," рубль"," рубля"," рублей") == string ("сорок один рубль"));
		BOOST_TEST(objects_less_100_to_string(52," рубль"," рубля"," рублей") == string ("пятьдесят два рубля"));
		BOOST_TEST(objects_less_100_to_string(96," рубль"," рубля"," рублей") == string ("девяносто шесть рублей"));
		BOOST_TEST(objects_less_100_to_string(86," рубль"," рубля"," рублей") == string ("восемьдесят шесть рублей"));
		BOOST_TEST(objects_less_100_to_string(11," рубль"," рубля"," рублей") == string ("одиннадцать рублей"));

		
	}	

BOOST_AUTO_TEST_SUITE_END()
#endif