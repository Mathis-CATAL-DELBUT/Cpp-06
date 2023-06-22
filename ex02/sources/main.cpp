/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:00:07 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/22 15:23:08 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base* generate(void)
{
    std::srand(std::time(0));
    int randomValue = (std::rand() % 3);
    if (randomValue == 0)
        return new A;
    else if (randomValue == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    (void)p;
    // if (dynamic_cast<A>(p))
    //     std::cout << "A" << std::endl;
    // else if (dynamic_cast<B>(p))
    //     std::cout << "B" << std::endl;
    // else 
    //     std::cout << "C" << std::endl;
}

int main()
{
    Base *first = generate();
    Base *second = generate();
    Base *troisieme = generate();

    identify(first);
    identify(second);
    identify(troisieme);
    return 0;
}