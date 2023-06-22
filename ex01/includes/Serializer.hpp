/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:33:42 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 14:50:48 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

struct Data
{
    std::string s1;
    std::string s2;
    int n;
};

class Serializer
{
    public:
        Serializer(void);
        Serializer(Serializer const & src);
        ~Serializer(void);

        Serializer &    operator=(Serializer const & rhs);

        uintptr_t          serialize(Data *ptr);
        Data*          deserialize(uintptr_t raw);
};

#endif