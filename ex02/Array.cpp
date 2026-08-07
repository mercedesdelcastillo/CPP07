/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:45:33 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/07 16:58:55 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
# include <iostream>

template <typename T> Array<T>::Array(void)
{
    this->elements = NULL;
    this->n = 0;
}
template <typename T> Array<T>::Array(unsigned int n)
{
    this->elements = new T[n];
    this->n = n;
}

template <typename T> Array<T>::Array(const Array &other)
{
    this->elements = new T[other.n];
    this->n = other.n
}

template <typename T> Array<T>::~Array(void)
{
    delete [] elements;
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other)
{
    if(this != &other)
    {
        delete [] this->elements;
        this->elements = new T(*other.n);
        this->n = other.n;
    }
    return (*this);
}

template <typename T> T* Array<T>::getElement(void) const
{
    return elements;
}

template <typename T> size_t Array<T>::size(void) const
{

}


