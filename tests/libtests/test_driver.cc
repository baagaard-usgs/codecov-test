#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/TextOutputter.h>

int
main(int argc,
     char* argv[]) {
    CppUnit::TestResultCollector result;
    try {
        CppUnit::TestResult controller;
        CppUnit::BriefTestProgressListener progress;
        controller.addListener(&result);
        controller.addListener(&progress);

        CppUnit::TestRunner runner;
        CppUnit::Test* test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
        runner.addTest(test);
        runner.run(controller);

        // Print test results
        CppUnit::TextOutputter outputter(&result, std::cerr);
        outputter.write();

    } catch (...) {
        abort();
    } // catch

    return (result.wasSuccessful() ? 0 : 1);
} // main


// End of file
