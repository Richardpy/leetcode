// RomanIntegerConversionTest.cpp

#ifndef ROMANINTEGERCONVERSION_H
#define ROMANINTEGERCONVERSION_H

#include <cppunit/extensions/HelperMacros.h>
#include "../src/Solution.h"

class RomanIntegerConversionTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE( RomanIntegerConversionTest );
    CPPUNIT_TEST(testRomanToInteger);
	CPPUNIT_TEST(testIntegerToRoman);
    //CPPUNIT_TEST_EXCEPTION(test_$exception_func, exception);
    CPPUNIT_TEST_SUITE_END();

public: 
   void setUp();
   void tearDown();

   void testRomanToInteger();
   void testIntegerToRoman();
private:
	Solution solution;

};
#endif
