//
//  main.cpp
//  2
//
//  Created by WuBoya on 16/4/6.
//  Copyright (c) 2016年 WuBoya. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;
const int maxn = 100000 + 5;
string rules[maxn];
string ips[maxn];


int main(int argc, const char * argv[]) {
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; ++ i) {
        char s[100], op[100];
        int a, b, c, d, e;
        scanf("%[^\n]\n", s);
        sscanf(s, "%s %d.%d.%d.%d\/%d", op, &a, &b, &c, &d, &e);
    }
        
    return 0;
}
