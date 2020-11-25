#include <iostream> 
#include <sstream> 
using namespace std; 
  
string convertToString(char* a, int size) 
{ 
    int i; 
    string s = ""; 
    for (i = 0; i < size; i++) { 
        s = s + a[i]; 
    } 
    return s; 
}
void extractIntegerWords(string str) 
{ 
    stringstream ss;     
  
    ss << str; 
    
    
    string temp; 
    int found; 
    while (!ss.eof()) { 
  
        ss >> temp; 
  
        if (stringstream(temp) >> found) 
        {
            ar += found; 
            ar +=" ";
        }
        temp = ""; 
    } 
    int x = ar.length();
    convertToString(ar,x);
} 


int main() 
{ 
    string str = "1: 2 3 4 prakhar"; 
    extractIntegerWords(str); 
    return 0; 
} 