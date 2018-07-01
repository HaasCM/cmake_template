/*!
    \brief File to define the App class

    This is a brief class for the purpose of a template cmake application
*/

#ifndef APP_HPP
#define APP_HPP

#include <cstdint>

typedef struct {
    uint8_t verboseLevel;
} CLIOptions;

/*!
    \brief Application class to handle the event looping for the template application
*/
class App {
public:
    App();
    ~App();

    bool init(const CLIOptions &options);
    int exec();
};

#endif // APP_HPP
