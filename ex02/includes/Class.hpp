/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:56:25 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 15:33:48 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class Base
{
    public:
        virtual ~Base(){};
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif