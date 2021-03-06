// StrStrTest.cpp

#ifndef STRSTR_H
#define STRSTR_H

#include <cppunit/extensions/HelperMacros.h>
#include "../src/Solution.h"

class StrStrTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE( StrStrTest );
    CPPUNIT_TEST(testKmp);
    //CPPUNIT_TEST_EXCEPTION(test_$exception_func, exception);
    CPPUNIT_TEST_SUITE_END();

public: 
   void setUp();
   void tearDown();

   void testKmp();

private:
	Solution solution;
   //void test_$exception_func();
};
#endif
