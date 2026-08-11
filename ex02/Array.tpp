/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 13:45:33 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/11 09:59:57 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <iostream>
#include <cstdlib>

template <typename T> Array<T>::Array(void) : elements(NULL), n(0)
{
}
template <typename T> Array<T>::Array(unsigned int n) : elements(new T[n]()), n(n)
{

}

template <typename T> Array<T>::Array(const Array &other) : elements(new T[other.n]()), n(other.n)
{
    for (unsigned int i = 0; i < n; i++)
        this->elements[i] = other.elements[i];
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
        this->elements = new T[other->n];
        for (int i = 0; i < n; i++)
            this->elements[i] = other.elements[i];
        this->n = other.n;
    }
    return (*this);
}

template <typename T>T &Array<T>::operator[](unsigned int index)
{
    if (index >= n)
        throw OutofBoundsExc();
    return elements[index];
}

template <typename T>T const &Array<T>::operator[](unsigned int index) const
{
    if (index >= n)
        throw OutofBoundsExc();
    return elements[index];
}

template <typename T> unsigned int Array<T>::size(void) const
{
    return n;
}

template <typename T> const char *Array<T>::OutofBoundsExc::what() const throw()
{
	return ("Index out of bounds");
}

#endif
