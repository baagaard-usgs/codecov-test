#include <portinfo>

#include "Simple.hh"

#include <cppunit/extensions/HelperMacros.h>

namespace codecovtest {
    class TestSimple;
} // codecovtest

class codecovtest::TestSimple : public CppUnit::TestFixture {
    // CPPUNIT TEST SUITE /////////////////////////////////////////////////
    CPPUNIT_TEST_SUITE(TestSimple);

    CPPUNIT_TEST(testConstructor);
    CPPUNIT_TEST(testDouble);
    CPPUNIT_TEST(testInt);
    CPPUNIT_TEST(testString);

    CPPUNIT_TEST_SUITE_END();

    // PUBLIC METHODS ///////////////////////////////////////////////////////
public:

    /// Test constructor.
    void testConstructor(void);

    /// Test double accessors.
    void testDouble(void);

    /// Test int accessors.
    void testInt(void);

    /// Test string accessors.
    void testString(void);

}; // class TestSimple
CPPUNIT_TEST_SUITE_REGISTRATION(codecovtest::TestSimple);

// ----------------------------------------------------------------------
// Test constructor.
void
codecovtest::TestSimple::testConstructor(void) {
    Simple obj;

    CPPUNIT_ASSERT_EQUAL_MESSAGE("Mismatch in double.", 0.0, obj._double);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Mismatch in int.", 0, obj._int);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Mismatch in string.", std::string("hello"), obj._string);
} // testConstructor


// ----------------------------------------------------------------------
// Test double accessors.
void
codecovtest::TestSimple::testDouble(void) {
    const double value = 2.0;

    Simple obj;
    obj.setDouble(value);
    CPPUNIT_ASSERT_EQUAL(value, obj.getDouble());
} // testDouble


// ----------------------------------------------------------------------
// Test int accessors.
void
codecovtest::TestSimple::testInt(void) {
    const int value = 5;

    Simple obj;
    obj.setInt(value);
    CPPUNIT_ASSERT_EQUAL(value, obj.getInt());
} // testInt


// ----------------------------------------------------------------------
// Test string accessors.
void
codecovtest::TestSimple::testString(void) {
    const std::string& value = "goodbye";

    Simple obj;
    obj.setString(value);
    CPPUNIT_ASSERT_EQUAL(value, obj.getString());
} // testDouble


// End of file
