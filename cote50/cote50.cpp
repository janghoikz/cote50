﻿#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    int temp[2001];
    temp[0] = 1;
    temp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        temp[i] = temp[i - 1] + temp[i - 2];
        temp[i] = temp[i] % 1234567;
    }
    
    answer = temp[n];
    return answer;
}


int main()
{
    std::cout << "Hello World!\n";
}