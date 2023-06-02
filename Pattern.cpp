#include <iostream>
using namespace std;
#include<bits/stdc++.h>
// sqaure * pattern
void  pattern(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<"* ";
        }
         cout<<endl;
    }
   
}
// right angle traingle * pattern
void pattern1(int N){
    // this is for outer loop number of rows;
    for(int i=0;i<N;i++){
        // this is for inner loop columns and the number of columns is equal to number of rows
        for(int j=0;j<=i;j++){
            cout<< "* ";
        }
        cout<<endl;
    }
}
// inverse right angle traingle * pattern
void pattern2(int N){
    for(int i=1;i<=N;i++){
        for(int j=0;j<N-i+1;j++){
            cout<< "* ";
        }
        cout<< endl;
        
    }
}
// number right triangle
void pattern3(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<< j;
        }
        cout<< endl;
    }
}
// numer right triangle unique numberss 11 22 333
void pattern4(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<< i<<" ";
        }
        cout<< endl;
    }
}
// number reverse triangle 
void pattern5(int N){
    for(int i=0;i<=N;i++){
        for(int j=1;j<N-i+1;j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }
}
void pattern6(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"* ";
        }
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*N-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
} 
// binary number triangle pattern 
void pattern8(int N){
    int start = 1;
    for(int i=0;i<N;i++){
        if(i%2==0) start =1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
// increasing pattern
void pattern9(int N){
    int num = 1;
    for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }
}
// character star pattern right traingle 
void pattern10(int N){
    for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
// character star pattern right reverse triangle 
void pattern11(int N){
    for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+(N-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
// character pattern triangle repeating elements
void pattern12(int N){
    for(int i=0;i<N;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main() {
	int N = 5;
	pattern12(N);
	return 0;
}