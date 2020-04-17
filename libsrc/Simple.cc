// implementation of Simple.

#include <portinfo>

#include "Simple.hh" \
    // implementation of class methods

// ---------------------------------------------------------------------------------------------------------------------
/// Default constructor.
codecovtest::Simple::Simple(void) :
    _double(0.0),
    _int(0),
    _string("hello") {}


// ---------------------------------------------------------------------------------------------------------------------
/// Destructor
codecovtest::Simple::~Simple(void) {}


// ---------------------------------------------------------------------------------------------------------------------
// Set double value.
void
codecovtest::Simple::setDouble(const double value) {
    _double = value;
}


// ---------------------------------------------------------------------------------------------------------------------
// Get double value.
double
codecovtest::Simple::getDouble(void) const {
    return _double;
}


// ---------------------------------------------------------------------------------------------------------------------
// Set int value.
void
codecovtest::Simple::setInt(const int value) {
    _int = value;
}


// ---------------------------------------------------------------------------------------------------------------------
// Get int value.
int
codecovtest::Simple::getInt(void) const {
    return _int;
}


// ---------------------------------------------------------------------------------------------------------------------
// Set string value.
void
codecovtest::Simple::setString(const std::string& value) {
    _string = value;
}


// ---------------------------------------------------------------------------------------------------------------------
// Get string value.
const std::string&
codecovtest::Simple::getString(void) const {
    return _string;
}


// End of file
