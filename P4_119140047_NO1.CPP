#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define nil 0
#define maxelmt 10000
typedef int info;
typedef int address;
struct stacko
{
    info data[maxelmt];
    address TOP;
};

#define TOP(S) (S).TOP
#define NilaiTOP(S) (S).data[(S).TOP]

void createempty (stacko *S)
{
    TOP(*S) = nil;
}

bool isempty (stacko S)
{
    return (TOP(S) == nil);
}

bool isfull (stacko S)
{
    return (TOP(S)== maxelmt);
}

void push (stacko *S, info x)
{
    if (isfull(*S))
    {
        cout << "Maaf stack penuh" << endl;
    }
    else
    {
        TOP(*S)++;
        NilaiTOP(*S) = x;
    }
}

void pop (stacko *S, info *x)
{
    if (isempty(*S))
    {
        cout << "Maaf stack sudah kosong" << endl;
    }
    else
    {
        *x = NilaiTOP(*S);
        NilaiTOP(*S) = nil;
        TOP(*S)--;
    }
}

void balikStr(string& str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
}
void jingan(string s)
{
    stacko Data_Test;
    info data_lihat;

    createempty(&Data_Test);
    int N =s.length();
    char q[N];

    strcpy(q,s.c_str());
    for (int f = 0 ; f < N ; f++) 
    {
        char o = q[f];
        if (o=='0') push(&Data_Test,0); 
        else if (o=='1') push(&Data_Test,1); 
        else if (o=='2') push(&Data_Test,2); 
        else if (o=='3') push(&Data_Test,3); 
        else if (o=='4') push(&Data_Test,4);
        else if (o=='5') push(&Data_Test,5);
        else if (o=='6') push(&Data_Test,6); 
        else if (o=='7') push(&Data_Test,7);
        else if (o=='8') push(&Data_Test,8);
        else if (o=='9') push(&Data_Test,9);
        else if (o=='_') pop(&Data_Test,&data_lihat);
        else continue;     
    }
    int arr[N];
    int i = 0;
    
    while(TOP(Data_Test) != nil)
    {
        pop(&Data_Test, &data_lihat);
        arr[i]=data_lihat;
        i++;
    }
    for (int j=i-1; j>=0; j--)
    {
        cout <<arr[j]<<" ";
    }

}
int main ()
{
    int o;
    cin >> o;
    string s[o];
    for (int i = 0; i < o; i++)
    {
        cin >> s[i];
    }

    //cin >> s;
    for (int i = 0; i < o; i++)
    {
        jingan(s[i]);
        cout <<endl;
    }//i=1;
    /*while (i<6)
    {
        cout << arr[i] << endl;
        i++;
    }*/
    
}