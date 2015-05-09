#ifndef VECTORUTIL_PTR_H
#define VECTORUTIL_PTR_H

#include <iostream>

namespace balhau{
  namespace crypto{
    template<class T>
    class VectorUtil{
    private:
    public:
      static void printVector(T* vector,int size){
	std::cout << "[";
	for(int i=0;i<size;i++){
	  if(i!=0){
	    std::cout << ",";
	  }
	  std::cout << *(vector++);
	}
	std::cout << "]" << std::endl;
      }
    };
  }
}

#endif