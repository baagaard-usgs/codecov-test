/** Simple C++ class.
 */

#if !defined(codecovtest_simple_hh)
#define codecovtest_simple_hh

namespace codecovtest {
    class Simple;
} // codecovtest

#include <string> // HASA std::string

class codecovtest::Simple {
    friend class TestSimple; // Unit testing

    // PUBLIC METHODS --------------------------------------------------------------------------------------------------
public:

    /// Default constructor.
    Simple(void);

    /// Destructor
    ~Simple(void);

    /** Set double value.
     *
     * @param[in] value Value for double.
     */
    void setDouble(const double value);

    /** Get double value.
     *
     * @returns Value of double.
     */
    double getDouble(void) const;

    /** Set int value.
     *
     * @param[in] value Value for int.
     */
    void setInt(const int value);

    /** Get int value.
     *
     * @returns Value of int.
     */
    int getInt(void) const;

    /** Set string value.
     *
     * @param[in] value Value for string.
     */
    void setString(const std::string& value);

    /** Get string value.
     *
     * @returns Value of string.
     */
    const std::string& getString(void) const;

    // PRIVATE MEMBERS -------------------------------------------------------------------------------------------------
private:

    double _double;
    int _int;
    std::string _string;

}; // Simple

#endif // codecovtest_simple_hh

// End of file
