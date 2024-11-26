// String
#include <iostream>
using namespace std;
int main()
{
	char greeting[6] = {'H','E','L','L','O','\0'};
	cout<<"Greeting message !"<<endl;
	cout<<greeting<<endl;
	return 0;
}

// String Operations
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[10] = "Hello ";
    char str2[10] = "World";
    char str3[10];
    int len;
    strcpy(str3,str1);
    cout<<"Copied : "<<str3<<endl;
    strcat(str1,str2);
    cout<<"Concantenation : "<<str1<<endl;
    cout<<"Length : "<<sizeof(str1)<<endl;
    return 0;
}

// String Swapping
#include<iostream>
using namespace std;
int main(){
    string r = "10";
    string m = "20";
    cout<<"R - "<<r<<endl;
    cout<<"M - "<<m<<endl;
    swap(r,m);
    r.swap(m);
    cout<<"R - "<<r<<endl;
    cout<<"M - "<<m<<endl;
    return 0;
}

// Concantenation
#include<iostream>
using namespace std;
int main(){
    string str1 = "Hello";
    string str2 = "World";
    // Append
    str1.append(str2);
    cout<<"Append : "<<str1<<endl;
    // + operator
    str1 += str2;
    cout<<"+ Operator : "<<str1<<endl;
    return 0;
}

// Problems
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "Sasuke";
    // Palindrome
    int r = str1.length();
    bool pal = true;
    for(int i=0;i<str1.length()/2;i++){
        if (str1[i]!=str1[r]){
            pal = false;
            break;
        }
        if (!pal) break;
    }
    cout<<"Palindrome : "<<pal;
    return 0;
    switch (String) case
    int c = 0;
    char ch;
    while(str1[c]!='\0'){
        ch = str1[c];
        if(ch==)
    }
}

