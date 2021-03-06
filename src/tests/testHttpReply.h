
#ifndef SQUID_SRC_TEST_HTTP_REPLY_H
#define SQUID_SRC_TEST_HTTP_REPLY_H

#include <cppunit/extensions/HelperMacros.h>

/*
 * test HttpReply
 */

class testHttpReply : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE( testHttpReply );
    CPPUNIT_TEST( testSanityCheckFirstLine );
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();

protected:
    void testSanityCheckFirstLine();
};

#endif

