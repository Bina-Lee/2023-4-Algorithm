#if 01
//backtracking 알고리즘
#include<stdio.h>
#include<stdlib.h>
#define INF 100000
#define MAX_VERTICES 10

int N;
// int W[MAX_VERTICES][MAX_VERTICES];
int W[MAX_VERTICES][MAX_VERTICES]={
    {0 ,2 ,7 ,3 ,10},
    {2 ,0 ,3 ,5 ,4 },
    {7 ,3 ,0 ,6 ,1 },
    {3 ,5 ,6 ,0 ,9 },
    {10,4 ,1 ,9 ,0 }
}

int dp[MAX_VERTICES][MAX_VERTICES];

int min(int a, int b){return (a<b)?a:b;}

int BacktrackTSP(int current, int visited){
    int result;
    int bestsolution=dp[current][visited];
    if(bestsolution!=0)return bestsolution;
    if(visited==((1<<N)-1)){
        if(W[current][0]!=0)return W[current][0];
        return INF;
    }
    bestsolution=INF;
    for(int i=0;i<N;i++){
        if(W[current][i]==0 || (visited & (1<<i)))continue;
        bestsolution=min(bestsolution,
                         W[current][i]
                            +BacktrackTSP(i,visited | 1<<i));
    }
    dp[current][visited]=bestsolution;
    return bestsolution;
}

int main(){
    printf("Enter the number of nodes:");
    // scanf("%d",&N);
    // for(int i=0;i<N;i++)for(int j=0;j<N;j++)scanf("%d",&W[i][j]);
    int result=BacktrackTSP(0,1);
    printf("\n The total distance of TSP=%d \n",result);
    return 0;
}
#endif

#if 01

#endif

#if 01

#endif

#if 01

#endif

#if 01

#endif

