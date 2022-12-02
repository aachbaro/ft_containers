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

        typedef T               value_type;
        typedef Alloc           alloc_type;
        typedef unsigned long   size_type;

        private :

        T*              _array;
        size_type       _capacity;
        size_type       _size;

        public :
        
        vector(): _array(nullptr), _capacity(0), _size(0) {}
        explicit vector(size_type n, const value_type& val) {
            _array = malloc(sizeof(val) * n + 5);
            for (int i = 0; i != n; i++) { _array[i] = val; }
        }
        ~vector() { free(_array); }

        T &operator[](size_type i) { return (_array[i]); }
    };
}

#endif