/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:51:19 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/21 15:01:06 by mcatal-d         ###   ########.fr       */
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
        ScalarConverter &operateur(const Scalarconverter &copy);
        static void convert(std::string str);
};