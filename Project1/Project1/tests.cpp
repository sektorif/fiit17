#ifdef TEST
#define BOOST_TEST_MODULE example

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"



BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
	{

		BOOST_TEST(string_from_int(0) == string ("����"));
		BOOST_TEST(string_from_int(1) == string ("����"));
		BOOST_TEST(string_from_int(2) == string ("���"));
		BOOST_TEST(string_from_int(3) == string ("���"));
		BOOST_TEST(string_from_int(4) == string ("������"));
		BOOST_TEST(string_from_int(5) == string ("����"));
		BOOST_TEST(string_from_int(6) == string ("�����"));
		BOOST_TEST(string_from_int(7) == string ("����"));
		BOOST_TEST(string_from_int(8) == string ("������"));
		BOOST_TEST(string_from_int(9) == string ("������"));
		BOOST_TEST(string_from_int(10) == string ("������"));
		BOOST_TEST(string_from_int(11) == string ("�����������"));
		BOOST_TEST(string_from_int(12) == string ("����������"));
		BOOST_TEST(string_from_int(13) == string ("����������"));
		BOOST_TEST(string_from_int(14) == string ("������������"));
		BOOST_TEST(string_from_int(15) == string ("����������"));
		BOOST_TEST(string_from_int(16) == string ("�����������"));
		BOOST_TEST(string_from_int(17) == string ("����������"));
		BOOST_TEST(string_from_int(18) == string ("������������"));
		BOOST_TEST(string_from_int(19) == string ("������������"));

	}

BOOST_AUTO_TEST_CASE( test_case2 )
	{
		int check;
		cin>>check;

		BOOST_TEST(number_less_100_to_string(20) == string ("��������"));
		BOOST_TEST(number_less_100_to_string(30) == string ("��������"));
		BOOST_TEST(number_less_100_to_string(40) == string ("�����"));
		BOOST_TEST(number_less_100_to_string(50) == string ("���������"));
		BOOST_TEST(number_less_100_to_string(60) == string ("����������"));
		BOOST_TEST(number_less_100_to_string(70) == string ("���������"));
		BOOST_TEST(number_less_100_to_string(80) == string ("�����������"));
		BOOST_TEST(number_less_100_to_string(90) == string ("���������"));
		BOOST_TEST(number_less_100_to_string(91) == string ("���������"));

		
	}	

BOOST_AUTO_TEST_SUITE_END()
#endif