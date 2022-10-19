Skip to content
Augustine-ebuka
/
alx-low_level_programming-1
Public
forked from Lordwill1/alx-low_level_programming
Code
Pull requests
Actions
Projects
Wiki
More
alx-low_level_programming-1
/
0x02-functions_nested_loops
/
101-natural.c
in
master
1
#include <stdio.h>
2
​
3
/**
4
 * main - computes and prints the sum of all the multiples
5
 * of 3 or 5 below 1024
6
 * Return: Always 0 (Success)
7
 */
8
int main(void)
9
{
10
        unsigned long int sum3, sum5, sum;
11
        int i;
12
​
13
        sum3 = 0;
14
        sum5 = 0;
15
        sum = 0;
16
​
17
        for (i = 0; i < 1024; ++i)
18
        {
19
                if ((i % 3) == 0)
20
                {
21
                        sum3 = sum3 + i;
22
                } else if ((i % 5) == 0)
23
                {
24
                        sum5 = sum5 + i;
25
                }
26
        }
27
        sum = sum3 + sum5;
28
        printf("%lu\n", sum);
29
        return (0);
30
}
31
​
Commit changes
Commit summary
Create 101-natural.c
Optional extended description
Add an optional extended description…
 Commit directly to the master branch.
 Create a new branch for this commit and start a pull request. Learn more about pull requests.
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Editing alx-low_level_programming-1/101-natural.c at master · Augustine-ebuka/alx-low_level_programming-1
