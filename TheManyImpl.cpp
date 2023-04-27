/*!
 \file TheManyImpl.cpp
 \brief Файл реализации реализации (кхе)
*/

#include "TheManyImpl"


/*!Конструктор.
*/
template<typename T>
TheManyImpl<T>::TheManyImpl(T* mass, int n) : n(0) {
  if (mass != 0 and n > 0) {
    this->n = n
    if (n < 64) {
      for(int i=0; i<n; ++i) {
        stat[i] = mass;
      }
    }
    else {
      for(int i=0; i<64; ++i) {
        stat[i] = mass[i];
      }
      for(int i=64; i<n; ++i) {
        dyn.push_back(mass[i]);
      }
    }
  }
}

/*!Деструктор.
*/
template<typename T>
TheManyImpl<T>::~TheManyImpl() {
  if (n >= 64) {
    dyn.clear();
  }
}

/*!Деструктор.
*/
template<typename T>
int TheManyImpl<T>::insert(T* elem, int pos) {
  if (pos<-1 or pos>n) {
    return -1;
  }
  if (pos == -1) {
    pos = n;
  }
  if (n < 63) {
    //!!!
  }
}
  T* pop(int);
  int index(T*, int);
  T* operator[](int);
}



#endif
