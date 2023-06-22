/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:40:40 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 14:47:15 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


int main()
{
    Data*   ptr;
    Data*  ptr2;
    uintptr_t   raw;
    Serializer  ser;

    ptr = new Data;
    ptr->s1 = "Hello";
    ptr->s2 = "World";
    ptr->n = 42;
    raw = ser.serialize(ptr);
    std::cout << "raw: " << raw << std::endl;
    ptr2 = ser.deserialize(raw);
    std::cout << "ptr2->s1: " << ptr2->s1 << std::endl;
    std::cout << "ptr2->s2: " << ptr2->s2 << std::endl;
    std::cout << "ptr2->n: " << ptr2->n << std::endl;
    delete ptr;
    return (0);
}