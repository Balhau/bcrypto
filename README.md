# C++ Cryptography Library (BCrypto)
This is a c++ project with a bunch of cryptographic implementations. This aim to be a experimental project to build a cryptographic
library and a way to learn a little more about c++, assembly programming and computer architecture

## Why c++
The two candidates were c and c++. The decision for c++ is only because it give us the power to build an OOP library while plain C would
force us to build modules of functions. Truth to be told the library will export a C like api to help interoperability with other
languages (including C) nevertheless the HOOP nature of C++ is a nice to have and this was a decision factor. So why not Java instead
of C++. Well the main reason is because Java is to high level and don't give us a way to expoit the hardware features when needed.
The possibility to made custom assembly code for the most overheaded computations is an important feature that lacks in languages as
high level as Java.


## Why CMAKE
This is a project build arround CMake build system. We could use the linux traditional tools however these are a little too low level
and a lot of work must be done in managing the build of the library. Since the deployment of the library in several Operative Systems
and arquitectures would require custom build primitives I decided to use a high level tool to abstract all these not so nice work.
