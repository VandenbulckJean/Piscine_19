/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvanden- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 09:02:34 by jvanden-          #+#    #+#             */
/*   Updated: 2020/02/06 09:17:24 by jvanden-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print(char a)
{
    write(1, &a, 1);
}
void printchiffre(int *tableau, int nombre)
{
    int i;
    
    i = 0;
    while (i <= nombre)
    {
        print(tableau[i]);
        i ++;
    }
    print(' ');
}

void printcomditionning(int *tableau, int nombre)
{
    printchiffre(tableau, nombre);
    
}



void ft_print_combn(int nombreacombiner)
{
    int tableau[nombreacombiner];
    int t;
    int i;
    int n;
    
    n = 0;
    while (n < nombreacombiner)
    {
        tableau[n] = 48;
        n++;
    }
    
    
    i = nombreacombiner -1;
    while (i >= 0)
    {
        t = 0;
        while (t < 9)
        {
            tableau[i] = tableau[i] + 1;
            printchiffre(tableau, nombreacombiner-1);
            t++;
        }
        if (tableau[i] == '9' && tableau[i-1] == '9')
        {
            i--;
            tableau [i] = 0;
        } else
        {
            tableau[i - 1] = tableau[i - 1] + 1;
            tableau[i] = 48;
        }
    }
}

int main()
{
    ft_print_combn(4);
}
