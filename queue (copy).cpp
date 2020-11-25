#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Nil 0
#define MaxEl 10000
typedef int infotype;
typedef int address;
typedef struct 
{
    infotype NILAI[MaxEl+1];
    address HEAD;
    address TAIL;
} Queue;

#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).NILAI[(Q).HEAD]
#define InfoTail(Q) (Q).NILAI[(Q).TAIL]

bool isEmpty(Queue Q) 
{
return ((Head(Q)==Nil) && (Tail(Q)==Nil));
}

int NbElmt(Queue Q) 
{
    if (isEmpty(Q))
        return 0;
    else if (Head(Q)<=Tail(Q)) 
        return (Tail(Q)-Head(Q)+1);
    else 
        return (MaxEl-Head(Q)+Tail(Q)+1);
    
}

bool isFull(Queue Q) 
{
    return (NbElmt(Q)==MaxEl);
}

void CreateEmpty(Queue *Q) 
{
    Head(*Q) = Nil;
    Tail(*Q) = Nil;
}

void Add(Queue *Q, infotype x) 
{
    if (!isFull(*Q)) 
    {
        if(isEmpty(*Q)) 
        {
            Head(*Q) = 1;
            Tail(*Q) = 1;
        }   
        else if (Tail(*Q)==MaxEl) Tail(*Q)=1;
        else Tail(*Q)++;
        InfoTail(*Q) = x;
    } 
    else 
    {
        cout << "Queue Penuh\n";
    }
}

void Del(Queue *Q, infotype *hapus) 
{
    *hapus = InfoHead(*Q);
    if (NbElmt(*Q)==1)
    {
        Head(*Q) = Nil;
        Tail(*Q) = Nil;
    } 
    else if (Head(*Q)==MaxEl) Head(*Q)=1;
    else Head(*Q)++;
}

void jingan(string s)
{
    Queue Data_Test;
    infotype data_lihat;

    CreateEmpty(&Data_Test);
    int N =s.length();
    char q[N];

    strcpy(q,s.c_str());
    for (int f = 0 ; f <N ; f++) 
    {
        char o = q[f];
        if (o=='0') Add(&Data_Test,0); 
        else if (o=='1') Add(&Data_Test,1); 
        else if (o=='2') Add(&Data_Test,2); 
        else if (o=='3') Add(&Data_Test,3); 
        else if (o=='4') Add(&Data_Test,4);
        else if (o=='5') Add(&Data_Test,5);
        else if (o=='6') Add(&Data_Test,6); 
        else if (o=='7') Add(&Data_Test,7);
        else if (o=='8') Add(&Data_Test,8);
        else if (o=='9') Add(&Data_Test,9);
        else if (o=='_') Del(&Data_Test,&data_lihat);
        else continue;     
    }
    int arr[N];
    int i = 0;
    //string a= " ";
   
    while(Head(Data_Test) != Nil)
    {
        //cout <<endl;
        Del(&Data_Test, &data_lihat);
        cout << data_lihat<<" ";
        
        //cout << data_lihat;
        
        /*arr[i]=data_lihat;
        a=a + arr[i];
        if (TOP(Data_Test) != nil) a = a+ " ";*/
        i++;
    }
   /* for (int j=0; j<i-1; j++)
    {
        cout <<arr[j]<<" ";
    }*/
    //balikStr(a);
    //cout <<a;
 
    
}

int main() {

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



}