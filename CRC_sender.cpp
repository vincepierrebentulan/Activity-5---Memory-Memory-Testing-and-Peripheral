#include <iostream>
using namespace std;
int main(){ 
string message,crc,encoded="";
cout <<"Enter the message: ";
getline(cin,message);
cout <<"Enter the divisor: ";
getline(cin,crc);
int m=message.length(),n=crc.length();
encoded+=message;
for(int i=1;i<=n-1;i++)
    encoded+='0';
    for(int i=0;i<=encoded.length()-n; ){
        for(int j=0;j<n; j ++)
            encoded [i+j] = encoded[i+j] == crc[j]? '0':'1';
            for(;i<encoded.length() && encoded[i]!='1';i++); 
    }
    cout << "Final Encoded CRC:" << message+encoded.substr(encoded.length()-n+1);
    return 0;
}