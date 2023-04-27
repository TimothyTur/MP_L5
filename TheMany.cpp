/*!
 \file TheMany.cpp
 \brief Файл реализации абстракции.

 \section description Описание
 Реализация абстракции полностью соответствует тому что описано в паттерне Bridge.
 */

#include "TheMany.h"

/*!Конструктор абстракции.
 Если один из аргументов равен нулю, то массив считается пустым.

 \param[in] mass Указатель на первый элемент в массиве для инициализации.
 \param[in] n    Число элементов в массиве.
 */
template<typename T>
TheMany<T>::TheMany(T* mass, int n) {
  pimpl = new TheManyImpl(mass, n);
}

/*!Конструктор по умолчанию.
 */
template<typename T>
TheMany<T>::TheMany() : TheMany(0, 0) {
}

/*!Деструктор абстракции.
 */
template<typename T>
TheMany<T>::~TheMany() {
  delete pimpl;
}

/*!Добавление элемента по индексу.
 Имеет перегрузку без указания индекса, при которой элемент будет добавлен в конец (pos=-1).

 \param[in] elem Элемент, которые требуется добавить в массив. При 0 не добавляет ничего.
 \param[in] pos  Индекс, по которому требуется добавить элемент.

 \return pos, -1 при неуспехе.
 */
template<typename T>
int TheMany<T>::insert(T* elem, int pos) {
  return pimpl->insert(elem, pos);
}

/*!Удаление элемента по индексу.
 Имеет перегрузку без указания индекса, при которой элемент будет удален с конца (pos=-1).

 \param[in] pos  Индекс, по которому требуется удалить элемент.

 \return Удаленный элемент, 0 при неуспехе.
 */
template<typename T>
T* TheMany<T>::pop(int pos) {
  return pimpl->pop(pos);
}

/*!Поиск элемента в массиве.
 Второй аргумент является индексом начала поиска, что актуально, так как функция возвращает 1 индекс.

 \param[in] elem Элемент, которые требуется найти в массиве. При 0 не ищет ничего.
 \param[in] pos  Индекс, с которого будет начат поиск. По умолчанию равен 0.

 \return Индекс найденного элемента, -1 при неуспехе.
 */
template<typename T>
int TheMany<T>::index(T* elem, int pos = 0) {
  return pimpl->index(elem, pos);
}

/*!Индексация элементов.

 \param[in] pos  Индекс элемента, который требуется вернуть.

 \return Указатель на элемент, 0 при неуспехе.
 */
template<typename T>
T* TheMany<T>::operator[](int pos) {
  return pimpl->operator[](pos);
}
