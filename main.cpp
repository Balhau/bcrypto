#include <iostream>
#include "src/crypto/hash/md5.h"
#include "src/arch/arch.h"
#include "src/utilities/scoped_ptr.h"

using namespace balhau::crypto;
using namespace std;

int main(int argc, char **argv) {
    Hash* hash;
    scoped_ptr<Md5> smart_ptr=scoped_ptr<Md5>(new Md5());
    hash=smart_ptr.get();
    cout << hash << endl;
    cout << multiplica(2,2) << endl;
    cout << hash->digest("Ola Mundo") << endl;
    cout << "Hello, world!" << std::endl;
    return 0;
}
