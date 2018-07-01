/*!
    \brief File to implement the main function for the template project
*/

#include "app.hpp"

/*!
    \brief The main function for the template application
    \param argc the count of arguements, the size of argv
    \param argv an array of command line arguments for the template project
    \return an exit code for the application
 */
int main(int argc, const char* argv[]) {
    App app;
    CLIOptions options;

    options.verboseLevel = 5;

    app.init(options);

    return app.exec();
}
