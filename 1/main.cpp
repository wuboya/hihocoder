//
//  main.cpp
//  1
//
//  Created by WuBoya on 16/4/6.
//  Copyright (c) 2016年 WuBoya. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

const int maxn = 1000 + 5;
int A[maxn];


int main(int argc, const char * argv[]) {
    int task;
    scanf("%d", &task);
    
    while (task) {
        int N, P, W, H;
        scanf("%d%d%d%d", &N, &P, &W, &H);
        for (int i = 0; i < N; ++ i) {
            scanf("%d", &A[i]);
        }
    
        int l = 1, r = min(W, H), S = 0;
        while (l < r) {
            S = (l + r + 1) / 2;
            int curpages = 0;
            int wcharnum = W / S;
            int hcharnum = H / S;
            for (int i = 0; i < N; ++ i) {
                curpages += (A[i] + wcharnum - 1) / wcharnum;
            }
            curpages = (curpages + hcharnum - 1) / hcharnum;
            
            if (curpages <= P) {
                l = S;
            } else {
                r = S - 1;
            }
        }
        printf("%d\n", l);
        task --;
    }
    return 0;
}
