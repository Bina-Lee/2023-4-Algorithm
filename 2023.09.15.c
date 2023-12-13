#if 01

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    clock_t start, stop;
    double duration;
    start=clock();

    for(int i=0;i<1000000;i++);

    stop=clock();
    duration=(double)(stop-start)/CLOCKS_PER_SEC;
    printf("%f second",duration);
    return 0;
}

#endif

#if 0

#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) )

void selection_sort(int list[], int n){
    int i, least, tmp;
    for(i=0;i<n-1;i++){
        least =i;
        for(int j=i+1;j<n;j++){
            if(list[j]<list[least]) least=j;
        }
        SWAP(list[i],list[least],tmp);
    }
}

int main(){
    int list_num = 9;
    int mylist[9]={5,3,8,4,9,1,6,2,7};
    
    printf("unsorted\n");
    for(int i=0;i<9;i++)printf("%d ",mylist[i]);
    printf("\n");

    selection_sort(mylist,list_num);

    printf("sorted\n");
    for(int i=0;i<9;i++)printf("%d ",mylist[i]);
    printf("\n");

    return 0;
}

#endif

#if 0

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SWAP(x,y,t) ( (t)=(x), (x)=(y), (y)=(t) )

void insertion_sort(int list[], int n){
    for(int i=1;i<n;i++){
        int key=list[i];
        int j;
        for(j=i-1;j>=0 && list[j]>key;j--) list[j+1]=list[j];
        list[j+1]=key;
    }
}

int main(){
    int list_num = 10;
    int mylist[10];

    srand(time(0));

    for(int i=0;i<10;i++)mylist[i]=rand()%100;
    
    printf("unsorted\n");
    for(int i=0;i<list_num;i++)printf("%d ",mylist[i]);
    printf("\n");

    insertion_sort(mylist,list_num);

    printf("sorted\n");
    for(int i=0;i<list_num;i++)printf("%d ",mylist[i]);
    printf("\n");

    return 0;
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

#if 0

#include<stdio.h>
int main(){
    
}

#endif

