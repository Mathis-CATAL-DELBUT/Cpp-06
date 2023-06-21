/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:51:19 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 23:11:42 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
    private:
        
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        static void convert(const std::string& str);
};

bool is_int(const std::string& str);
bool is_char(const std::string& str);
bool is_float(const std::string& str);
bool is_double(const std::string& str);

#endif