#include<iostream>

using namespace std;

int adiff(int A, int B){
    int result = 0;
    if (A>=360)
    {
        while (A>=360)
        {
            A=A-360;
        }   
    }
     if (B>=360)
    {
        while (B>=360)
        {
            B=B-360;
        }   
    }
    if (A-B<0)
    {
        result = B-A;
    }else{
        result = A-B;
    }
    if (result>180)
    { 
        result = result-360;   
    }
    if (result<0)
    {
        result=result*(-1);
    }
    
    return result;
}
int main(){
    cout << adiff(10,350);
    return 0;
}	
	