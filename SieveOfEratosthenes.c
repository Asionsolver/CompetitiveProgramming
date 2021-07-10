/*
Let explain:

Number: 2->0 3 4->1 5 6->1 7 8->1 9 10->1 11 12->1  13 14->1 15 16->1 17 18->1 19 20->1 21->1 

n = 20;

prime[22 + 1] = {0}; //mean every index assign 0

for loop:

for (i = 2 ; 2 <=21; i++){
    if(prime[2] == 0) Because prime every index assign 0
    {
        for(j = 2*2; 4<=21; J = j+i = 4 + 2 = 6
                                            = 8
                                            = 10
                                            = 12
                                            = 14
                                            = 16
                                            = 18
                                            = 20){
            prime[4] = 1;
            prime[6] = 1;
            prime[8] = 1;
            prime[10] = 1;
            prime[12] = 1;
            prime[14] = 1;
            prime[16] = 1;
            prime[18] = 1;
            prime[20] = 1;
        }
    }
}

for (i = 3 ; 3 <=21; i++){
    if(prime[3] == 0) Because prime every index assign 0
    {
        for(j = 3*3; 9<=21; J = j+i = 9 + 3 = 12 
                                            = 15
                                            = 18
                                            = 21
                                            ){
            prime[9] = 1;
            prime[15] = 1;
            prime[21] = 1;
        }
    }
}

for (i = 4 ; 4 <=21; i++){
    if(prime[4] == 1) Because prime[4]  assign 1
    {
    }
}

for (i = 5 ; 5 <=21; i++){
    if(prime[5] == 0) Because prime every index assign 0
    {
        for(j = 5*5; 25<=21; J = 25+5 = 30) loop can not execute because 25 <=20 {
           
        }
    }
}




*/


#include<stdio.h>

void sieveOfEratosthenes(int n){
    int prime[n + 1];
    int i, j;
    for (i = 0; i < n + 1; i++){
       prime[i] = 0;   
    }

    for (i = 2; i <= n; i++)
    {
        if(prime[i] == 0){
            for(j = i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }

    for(i = 2; i<=n; i++){
        if(prime[i] == 0){
            printf("%d ", i);
        }
    }
}

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    sieveOfEratosthenes(n);

    printf("\n");
    return 0;
}