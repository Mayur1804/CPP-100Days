// Writing a class

#include <iostream>
using namespace std;

class logcall {

public:
    // Constants representing different log levels
    const int logLevelError = 0;
    const int logLevelWarning = 1;
    const int logLevelInfo = 2;

private:
    // Member variable to store the current log level
    int m_logLevel = logLevelInfo;

public:
    // Function to set the log level
    void setLevel(int level) {
        m_logLevel = level;
    }

    // Function to print a warning message
    void warn(const char* message) {
        if (m_logLevel >= logLevelWarning) {
            cout << "[warning] " << message << endl;
        }
    }

    // Function to print an error message
    void Error(const char* message) {
        if (m_logLevel >= logLevelError) {
            cout << "[error] " << message << endl;
        }
    }

    // Function to print an info message
    void info(const char* message) {
        if (m_logLevel >= logLevelInfo) {
            cout << "[info] " << message << endl;
        }
    }
};

int main()
{
    // Create an instance of the logcall class
    logcall logtext;

    // Set the log level to warning
    //logtext.setLevel(logtext.logLevelWarning);

    // Print a warning message
    logtext.warn("Hello");

    // Print an error message
    logtext.Error("from error");

    // Print an info message
    logtext.info("this is info");
}
