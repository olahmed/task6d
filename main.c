/**
 ******************************************************************************
 * @file           : task 6
 * @author         : ola ahmed
 * @brief          : pointers
 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ********************** Global Variables Section Start ************** */
    int num1;
    int num2;
/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Declaration Section Start ************ */

/* ********************** Global Declaration  Section End   *********** */

/* ********************** Sub-Program Declarations Section Start ****** *///functions
    int _add_ (int a, int b);
    int _sub_ (int a, int b);
    int _mul_ (int a, int b);
    int _div_ (int a, int b);
/* ********************** Sub-Program Declarations Section End ******** */

/* ********************** Sub-Program Section Start ******************* */
   int main()
{   int op_num;
    printf("please enter the first number and the second number :");
    scanf("%i  %i",&num1,&num2);
    printf("please enter the operation number(add-sub-mul-div):");
    scanf("%i",&op_num);
    int (*operations[4])(int, int) = {_add_,_sub_,_mul_,_div_};
     printf("Result: %d\n", operations[op_num-1](num1, num2));
    return 0;
}
/* ********************** Sub-Program Section End ******************** */

/* ********************** Sub-Program definition Section Start ******* */
    int _add_ (int a, int b)
    {
    int sum;
    sum=a+b;
    return sum;
    }
    int _sub_ (int a, int b)
    {
    int sub;
    sub=a-b;
    return sub;
    }
    int _mul_ (int a, int b)
    {
    int mul;
    mul=a*b;
    return mul;
    }
    int _div_ (int a, int b)
    {
    int div1;
    div1=a/b;
    if (0==b)
        {
            printf("undefined");
            div1=0;
        }
    return div1;
    }

/* ********************** Sub-Program definitions Section End ******** */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      20 feb 2024          num4
*/
