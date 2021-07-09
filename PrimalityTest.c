/*
So lets ecxplain:

Check n = 37 is prime or not.

Prime rules: n number divisor : 1,n -->Its called Prime number 

37 number divisor : 1, 37 -->So 37 number is prime number.

But 39 number divisor : 1, 3, 13 -->Not prime number because 
                                    here the common divisor is 1, 13 (1,N) but there are 3 as more so its called not prime

1st Solution:

1st step:
we can create for loop:
for (i = 2; i<n;i++){
    if(n%2 == 0){
        return false;
    }else{
        return true;
    }
}

But but this program time complexity : O(n-1)

So its not proper solution this problem.

2nd Solution:

Check n = 100 is prime or not.

Prime rules: n number divisor : 1,n -->Its called Prime number .

So here we will see what the number 100 is divided by.

100 = 1,2,4,5,20,25,50,100
pair=(1,100),(2,50),(4,25),(5,20)
100 sprt(100) =10 (1,2,3,4,5,6,7,8,9,10)
so check number(10) = 2,4,5

76 = 1,2,4,19,38,76
pair=(1,76),(2,38),(4,19)
76 sprt(76) = 8 (1,2,3,4,5,6,7,8)
so check number(10) = 2,4

12 = 1,2,3,4,6,12
pair=(1,12),(2,6),(3,4)
12 sprt(12) =3 (1,2,3)
so check number(10) = 2,3

1st step:
we can create for loop:
for (i = 2; i<sqrt(n);i++){
    if(n%2 == 0){
        return false;
    }else{
        return true;
    }
}
this program time complexity : O(nlog(n))
This complexity better but not best

3rd Solution:
st step:
we can create for loop:
if(n<2){
    return false;
}
if(n<=3){
    return true;
}
for (i = 3; i<sqrt(n);i+=2){
    if(n%2 == 0){
        return false;
    }else{
        return true;
    }
}
This complexity better other 2 solution
*/

#include<stdio.h>
#include<math.h>
#include <stdbool.h>

bool primeNumber(int n){
   
    if(n<2){
    return false;
    }
    if (n<=3){
    return true;
    }
    if (n%2 == 0){
    return false;
    }
    for (int i = 3; i*i<=n;i+=2){
        if(n%i == 0){
        return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);

    if(primeNumber(n) == true){
        printf("%d is prime number.\n",n);
    }
    else{
        printf("%d is not prime number.\n",n);
    }

    printf("\n");
    return 0;
}