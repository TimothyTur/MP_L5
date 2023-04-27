/*!
 \file TheManyImpl.h
 \brief Заголовочный файл интерфейса реализации

 \section description Описание
 Класс реализации выполнен по подобию boost::container::small_vector. В нем имеется 2 части - статическая и динамическая. Статическая часть выделяется в массиве сразу при создании объекта, динамическая часть добавляется при необходимости и представляет из себя ровно обычный std::vector.
*/

#include <vector>

#ifndef THEMANYIMPL
/*!Класс абстракции множества
  
  Содержит функии добавления и удаления элементов последнего и по индексу, поиск элемента в массиве, и конструктор на обычном массиве.
*/
template<typename T>
class TheManyImpl {
  (T*) stat[64];
  std::vector<T*> dyn;
  int n;

 public:
  TheManyImpl(T*, int);
  ~TheManyImpl();
  int insert(T*, int);
  T* pop(int);
  int index(T*, int);
  T* operator[](int);
}



#endif
