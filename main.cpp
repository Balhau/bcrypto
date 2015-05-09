#include <iostream>
#include "src/crypto/hash/md5.h"
#include "src/arch/arch.h"
#include "src/utilities/scoped_ptr.h"
#include "src/utilities/vectorUtil.h"

using namespace balhau::crypto;
using namespace std;


int main(int argc, char **argv) {
    Hash* hash;
    scoped_ptr<Md5> smart_ptr=scoped_ptr<Md5>(new Md5());
    hash=smart_ptr.get();
    float vec1[4]={1,2,3,4};
    float vec2[4]={1,2,3,4};
    float *v1,*v2;
    v1=vec1;v2=vec2;
    cout << hash << endl;
    cout << BMATH_MUL_INT(2,2) << endl;
    BMATH_MUL_VEC(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    BMATH_ADD_VEC(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    BMATH_AND_VEC(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    BMATH_XOR_VEC(v1,v1);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    BMATH_OR_VEC(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    cout << hash->digest("Ola Mundo") << endl;
    cout << "Hello, world!" << std::endl;
    return 0;
}
