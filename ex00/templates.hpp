/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medel-ca <medel-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 10:04:13 by medel-ca          #+#    #+#             */
/*   Updated: 2026/08/07 12:20:06 by medel-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T> void swap(T &x, T &y)
{
    T temp(x);
    x = y;
    y = temp;
}

template <typename T> T const &min(const T &x, const T &y)
{
    return (x < y) ? x : y;
}

template <typename T> T const &max(const T &x, const T &y)
{
    return (x > y) ? x : y;
}

#endif