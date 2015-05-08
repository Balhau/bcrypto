#ifndef SCOPED_PTR_H
#define SCOPED_PTR_H

#include <iostream>

namespace balhau{
  namespace crypto{
    template<class T>
    class scoped_ptr{
    private:
      T* pointer;
    public:
      scoped_ptr(T* ptr){
	pointer=ptr;
      }
      scoped_ptr(const T* ptr){
	pointer=ptr;
      }
      
      T* get(){
	return pointer;
      }
      
      ~scoped_ptr(){
	delete pointer;
      }
    };
  }
}

#endif