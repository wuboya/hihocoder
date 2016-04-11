//
//  main.cpp
//  3
//
//  Created by WuBoya on 16/4/6.
//  Copyright (c) 2016年 WuBoya. All rights reserved.
//

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

const int maxn = 100 + 5;
int matrix[maxn][maxn];
int f[maxn][maxn][maxn];

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; ++ i) {
        for (int j = 0; j < M; ++ j) {
            scanf("%d", &matrix[i][j]);
            for (int k = 0; i < 2; ++ k) {
                f[i][j][k] = 0;
            }

        }
    }
    
    int cost = 0;
    for (int i = N; i >= 0; -- i) {
        for (int j = M; j >= 0; -- j) {
            int cost1 = 0, cost2 = 0, cost3 = 0;
            if (i + 1 < N && j + 1 < M) {
                if (matrix[i][j + 1] == '.') {cost1 ++;}
                else {cost2 ++, cost3 ++;}
                if (matrix[i + 1][j] == 'b') {cost1 ++;}
                else {cost3 ++;}
                f[i][j][0] = min(f[i + 1][j][1] + cost1, min(f[i][j + 1][0] + cost2, f[i][j + 1][0] + cost3));
            }
        }
    }
    
    
    
    return 0;
}
