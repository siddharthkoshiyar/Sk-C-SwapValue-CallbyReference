//
//  main.c
//  Sk-C SwapValue Callbyref
//
//  Created by Student P_04 on 24/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include <stdio.h>

void Swap(int *, int *);

int main(int argc, const char * argv[]) {
    
    int a,b;
    
    printf("Enter two numbers!\n");
    scanf("%d%d", &a, &b);
    printf("a: %d b: %d\n", a, b);
    Swap(&a, &b);
    printf("a: %d b:%d\n", a, b);
    
    return 0;
}


void Swap(int *x, int *y){
    
    
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    
    
    
}