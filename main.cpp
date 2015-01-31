#include <iostream>
#include "scr/crypto/hash/md5.h"
#include "scr/arch/arch.h"

using namespace balhau::crypto;
using namespace std;
int main(int argc, char **argv) {
    Hash *hash;
    Md5 md5=Md5();
    hash=&md5;
    cout << mul(2,2) << endl;
    cout << hash->digest("Ola Mundo") << endl;
    cout << "Hello, world!" << std::endl;
    return 0;
}
