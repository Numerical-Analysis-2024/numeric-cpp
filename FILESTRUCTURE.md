This is an explanation of the file structure that the cookiecutter
generated for you:

* C++ source files:
  * `include/numeric/numeric.hpp` is the main
    C++ header that declares the interface of your library.
  * `app/numeric_app.cpp` is an executable that uses the library.
    This can e.g. be used to provide a command line interface for your project.
  * `tests/numeric_t.cpp` contains the unit tests for the library.
    The unit tests are written using Catch2. For further reading on what can be achieved
    with Catch2, we recommend [their tutorial](https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md).
  * `tests/tests.cpp` is the Catch2 testing driver. You do not need to change
    this. Placing this in a separate compilation unit than the unit test
    implementation decreases the compilation time of the test suite.
* CMake build system files
  * `CMakeLists.txt` describes the CMake configuration script. You can find such files
    in many directories. When CMake runs, the `CMakeLists.txt` from the top-level directory
    executes top to bottom. Whenever a command `add_subdirectory(<dir>)` is executed,
    the `CMakeLists.txt` file from the directory `<dir>` is immediately executed. A comprehensive
    reference of CMake's capabilities can be found in the [official CMake docs](https://cmake.org/documentation/).
    A well-written, opinionated book for beginners and experts is [Modern CMake](https://cliutils.gitlab.io/modern-cmake/).
* Documentation configuration files
  * The Doxygen documentation is configured directly from `doc/CMakeLists.txt`.
    To further configure the build, you can check the [Doxygen Configuration Manual](https://www.doxygen.nl/manual/config.html)
    for available options and add them with `set(DOXYGEN_<param> <value>)` before
    the call to `doxygen_add_docs`.
* Configuration for CI/Code analysis/Documentation services
  * `.github/workflows/ci.yml` describes the Github Workflow for Continuous
    integration. For further reading on workflow files, we recommend the
    [introduction into Github Actions](https://docs.github.com/en/free-pro-team@latest/actions/learn-github-actions/introduction-to-github-actions)
    and [the reference of available options](https://docs.github.com/en/free-pro-team@latest/actions/reference/workflow-syntax-for-github-actions).
* Markdown files with meta information on the project. [Markdown](https://www.markdownguide.org/basic-syntax/) is
  a good language for these files, as it is easy to write and rendered into something beautiful by your git repository
  hosting provider.
  * `README.md` is the file that users will typically see first when discovering your project.
  * `COPYING.md` provides a list of copyright holders.
  * `LICENSE.md` contains the license you selected.
  * `TODO.md` contains a list of TODOs after running the cookiecutter. Following the
    instructions in that file will give you a fully functional repository with a lot
    of integration into useful web services activated and running.
  * `FILESTRUCTURE.md` describes the generated files. Feel free to remove this from the
    repository if you do not need it.
* Other files
  * `.gitignore` contains a default selection of files to omit from version control.
