#ifndef SCOPED_PTR_H
#define SCOPED_PTR_H

namespace balhau{
  namespace crypto{
    template<class T>
    class scoped_ptr{
    private:
      T* pointer;
    public:
      scoped_ptr(const T* pointer){
	this.pointer=pointer;
      }
      ~scoped_ptr(){
	delete this.pointer;
      }
    };
  }
}

#endif