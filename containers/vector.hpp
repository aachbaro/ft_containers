#ifndef VECTOR_HPP
# define VECTOR_HPP

# include <memory>
# include <algorithm>
# include <cstddef>
# include <tgmath.h>

namespace ft
{
    template < class T, class Alloc = std::allocator<T> >
    class vector
    {
        public :

        typedef T                                           value_type;
        typedef Alloc                                       allocator_type;
        typedef typename allocator_type::reference          reference;
        typedef typename allocator_type::const_reference    const_reference;
        typedef typename allocator_type::pointer            pointer;
        typedef typename allocator_type::const_pointer      const_pointer;
        typedef unsigned long                               size_type;

        private :

        T*              _array;
        size_type       _capacity;
        size_type       _size;
        allocator_type  _allocator;

        public :
        
        vector(): _array(nullptr), _capacity(0), _size(0) {}
        explicit vector(size_type n, const value_type& val) {
            _array = _allocator.allocate(n);
            for (int i = 0; i != n; i++) { _array[i] = val; }
            _size = n;
            _capacity = n;
        }
        ~vector() { _allocator.deallocate(_array, _size); }

        T &operator[](size_type i) { return (*(_array + i)); }

        reference           at(size_type position) { return (_array[position]); }
        const_reference     at(size_type position) const { return (_array[position]); }
        reference           back() { return (_array[_size - 1]); }
        const_reference     back() const { return (_array[_size - 1]); }
        reference           front() { return (_array[0]); }
        const_reference     front() const { return (_array[0]); }
        T*                  data() { return (_array); }
        const T*            data() const { return (_array); }
        bool                empty() const { return (_size == 0 ? 1 : 0); }
        size_type           max_size() const { return (allocator_type().max_size()); }
        void                reserve(size_type new_cap) {
            _array = _allocator.allocate(new_cap);
            _capacity = new_cap;
        }
        void                clear() {
            for (size_type i = 0; i < _size; i++) { _allocator.destroy(&at(i)); }
            _size = 0;
        }
        void                push_back(const T& value) {
            if (_capacity == _size) { reserve(_capacity + 1); }
            _size++;
            back() = value;
        }
        void                pop_back() {
            _allocator.destroy(&back());
            _size--;
        }

        size_type           size() const { return(_size); }
        size_type           capacity() const { return (_capacity); }

        /* iterators */
        
    };
}

#endif