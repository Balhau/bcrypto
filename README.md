# C++ Cryptography Library (BCrypto)
This is a c++ project with a bunch of cryptographic implementations. This aim to be a experimental project to build a cryptographic
library and a way to learn a little more about c++, assembly programming and computer architecture

## Why c++
The two candidates were c and c++. The decision for c++ is only because it give us the power to build an OOP library while plain C would
force us to build modules of functions. Truth to be told the library will export a C like api to help interoperability with other
languages (including C) nevertheless the OOP nature of C++ is a nice to have and this was a decision factor. So why not Java instead
of C++. Well the main reason is because Java is to high level and don't give us a way to expoit the hardware features when needed.
The possibility to made custom assembly code for the most overheaded computations is an important feature that lacks in languages as
high level as Java.


## Why CMAKE
This is a project build arround CMake build system. We could use the linux traditional tools however these are a little too low level
and a lot of work must be done in managing the build of the library. Since the deployment of the library in several Operative Systems
and arquitectures would require custom build primitives I decided to use a high level tool to abstract all these not so nice work.

## Compile the project

To compile the project you should have installed CMake and a g, g++ compiler. The project has code in c++ as well c for the low level
inline assembly instructions to leverage computer power over specialized instructions for the several computer architectures.

After this pre requisites installed you should run

    cmake .
    make

After that the binaries as well as the dynamic libs will be generated into the folder bin

    ls bin
    libbhash.so  libbmath.so  libbutil.so  mcrypto

## Overal structure

The project, for now, is composed of three libs and one aplication.

### Utilities libbutil.so

  Here will be implemented auxiliary functionalities.

### Math Library libbmath.a

  Here will be implemented math architecture dependent operations

### Hash Library libbhash.so

  Here wil be implemented hash functions
