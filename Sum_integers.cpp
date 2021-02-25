#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    
    long long sum = 0;
    if ( a > b ){
        for ( int i = b; i < a+1; i++)
            answer += i;
    } 
    else if ( a < b ) {
        for ( int i = a; i < b+1; i++)
            answer += i;
    }
    else {
        answer = a;
    }
    
    return answer;
}
