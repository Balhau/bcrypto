#include <iostream>
#include "src/crypto/hash/md5.h"
#include "src/arch/arch.h"
#include "src/utilities/scoped_ptr.h"
#include "src/utilities/vectorUtil.h"

using namespace balhau::crypto;
using namespace std;


Md5 getHash(){
  Md5 md5;
  return md5;
}

int main(int argc, char **argv) {
    Md5 hash;
    Hash* phash;
    scoped_ptr<Md5> smart_ptr=scoped_ptr<Md5>(new Md5());
    hash=getHash();
    phash=smart_ptr.get();
    float vec1[4]={1,2,3,4};
    float vec2[4]={1,2,3,4};
    float *v1,*v2;
    v1=vec1;v2=vec2;
    cout << &hash << endl;
    cout << BMATH_MUL_INT(2,2) << endl;
    MUL_VEC_FLOAT128(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    ADD_VEC_FLOAT128(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    AND_VEC_FLOAT128(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    XOR_VEC_FLOAT128(v1,v1);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    OR_VEC_FLOAT128(v1,v2);
    VectorUtil<float>::printVector(vec1,4);
    VectorUtil<float>::printVector(vec2,4);
    cout << hash.digest("Ola Mundo") << endl;
    cout << "Hello, world!" << endl;
    
    return 0;
}
