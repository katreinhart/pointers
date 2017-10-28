//
//  main.cpp
//  Pointers and References
//
//  Created by Katherine Reinhart on 10/28/17.
//  Copyright © 2017 reinhart.digital. All rights reserved.
//

#include <iostream>

//int Add(int *a, int *b) {
//    return *a + *b;
//}

//void Add(int *a, int *b, int *result) {
//    *result = *a + *b;
//}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    using namespace std;
    
    int a = 10, b = 5;
//    int result = 0;
    
    int *x = &a, *y = &b;
    cout << "*x: " << *x << ", *y: "<< *y << endl;
    Swap(x, y);
    cout << "*x: " << *x << ", *y: "<< *y << endl;
    
    
    return 0;
}


