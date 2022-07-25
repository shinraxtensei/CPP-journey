#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    private:
        std::size_t _size;
        T *_content;
    public:


        class outofrange : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return "out of range";
                }
        };
        
        // Constructors

        Array(void) : _size(0), _content(NULL) {}

        Array(std::size_t size) : _size(size) , _content(NULL)
        {
            if (_size)
                _content = new T[_size];
        }


        Array(const Array & a) : _size(a._size), _content(NULL)
        {
            if(_size)
                _content = new T[_size];
            for (std::size_t i = 0; i < _size; i++)
                _content[i] = a._content[i];
        }

        ~Array(void)
        {
            if (_content)
                delete [] _content;
            _content = NULL;
            _size = 0;
        }

        size_t size(void) const {return this->_size;}

        

        // operatos overload
        
        T& operator[](std::size_t i)
        {
            if (i >= _size)
                throw Array::outofrange();
            return _content[i];
        }


        Array& operator=(const Array & a)
        {
            if (this != &a)
            {
                if (_size)
                {
                    delete [] _content;
                    _content = NULL;
                    _size = 0;
                }
                _size = a._size;
                if (_size)
                    _content = new T[_size];
                for (std::size_t i = 0; i < _size; i++)
                    _content[i] = a._content[i];
            }
            return *this;
        }

};






