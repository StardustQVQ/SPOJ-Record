#include<stdio.h>
using namespace std;

int arr[505], i, j, n, s;

/*
Since we want to get S from manipulating the operators, if S > 0, we want to make 
N - S to have 0 effect. Thus, assuming all the operators are '+', we can try to 
take off (N - S)/2 from the original equation by turning some of the operators to '-', 
or we can jump into other branches depending on different situations. The strategy
is quite similar when S < 0.    
*/

int main()
{
	// Negative situation
    scanf("%i%i",&n,&s);
    if(s < 0){
        j = (n*(n+1))/2;
        if((j+s) & 1 || j <= (-1*s))
            printf("Impossible\n");
        else{
            j = (j+s)/2 - 1;
            i = n+1; // there is no -1.
            //greedy process
            while(--i > 1 && j){
                if(j-i > 1){
                    j -= i;
                    arr[i] = 1;
                }
                else if(j-i == 0){
                    j -= i;
                    arr[i] = 1;
                    break;
                }
            }
            if(j)
                printf("Impossible\n");
            else{
                printf("1");
                i = 1;
                while(++i <= n){
                    arr[i] ? printf("+%i",i) : printf("-%i",i);
                }
                printf("\n");
            }
        }
    }
	
	// Positive situation
    else{
        j = (n*(n+1))/2;
        if((j-s) & 1 || j < s)
            printf("Impossible\n");
        else{
            j = (j-s)/2;
            i = n+1;
            while(--i > 1 && j){
                if(j-i > 1){
                    j -= i;
                    arr[i] = 1;
                }
                else if(j-i == 0){
                    j -= i;
                    arr[i] = 1;
                    break;
                }
            }
            if(j)
                printf("Impossible\n");
            else{
                printf("1");
                i = 1;
                while(++i <= n){
                    arr[i] ? printf("-%i",i) : printf("+%i",i);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
