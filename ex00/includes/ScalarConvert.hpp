/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:51:19 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 14:15:32 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP

# include <iostream>
# include <string>
# include <iomanip>
#include <stdexcept>
#include <float.h>
#include <limits>
#include <limits.h>
#include <sstream>
#include <stdlib.h>

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
bool convertStringToInt(const std::string& str, int& result);
bool convertStringToFloat(const std::string& str, float& result);
bool convertStringToDouble(const std::string& str, double& result);

#endif