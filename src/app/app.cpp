/*!
    \brief file to implement and define the Application class
*/
#include "app.hpp"
#include <iostream>
#include <string>

/*!
    \brief Default initializer for the Application class
*/
App::App() = default;

/*!
    \brief Default destructor for the Application class
*/
App::~App() = default;

/*!
    \brief Function to setup runtime initalization of the application

    This runtime initalization include options such as runtime socketing,
    logging, and verbosity levels

    \param options The struct of command line arugments
    \return true if initalization succeeds
*/
bool App::init(const CLIOptions& options) {
    std::cout << "Recieved a verbosity level of "
              << options.verboseLevel << std::endl;
    return true;
}

/*!
    \brief Function to execute the main loop of the application
    \return an exit code of the application
*/
int App::exec() {
    std::cout << "Executing the application!" << std::endl;
    while(true) {

    }

    return 0;
}
