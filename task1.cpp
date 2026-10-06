/*
** EPITECH PROJECT, 2026
** CGPA Calculator
** File description:
** Main file
*/

#include <iostream>
using namespace std;
/*int main(int ac, char *av[])
{
    int a = 5;
    int b = 6;
    int result = a + b;

    std::cout << "The result : " << result << std::endl;
    return 0;
    }*/
int main(int ac, char* av[])
{
    int a = 5;
    int c = atoi(av[1]);
    int b = a + c;
    
    cout << "Number of courses taken by the student : " << c << endl;
    for (int i = 0; i < c; i++) {
        cout << "cour: " << i << endl;
    }
    return 0;
}
