//**********************program to reverse an array******************************

// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
// string s="Mohit";
//  int n =s.length();
// // cout<<"your answer is "<<n;
// for (int i = 0; i < n/2; i++)
// {
//     swap( s[i],s[n-i-1]);
// }
// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(void)
// {
// string s="Mohit";
//  int n =s.length();
//  string rev="";
// // cout<<"your answer is "<<n;
// for (int i=0; i<n;i++)
// {
// rev=rev+s[n-i-1];
// }

// cout<<rev;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
                     //0 //1//2    //4//3//2
                        //mohit //tihom
                        //tohim
                        //tihom
void reversearr(string &s,int start,int end){
    if(start>=end)
    return;
// cout<<"hello";
     int temp = s[start];
    s[start] = s[end];
    s[end] = temp;
     
//    cout<<s<<endl;
   reversearr(s, start + 1, end - 1);
}


int main(){
    string s="olleh";
    int l=s.length(); //4 

    int start=0;  //0
    int end=l-1;  //4
reversearr(s,start,end);
cout<<s;
}
