#include <vector>
#include <iostream>
#include <string>
#include <array>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "<tag1/value/=/'Helloworld'>";
    char char_array[s1.length() + 1];
    vector<string> tag_vec;
    map<string,string> map_tag;
    
    // while(s1.size()!= 0)
    // {
        // find tag
        if(s1[0] == '<'){
        string tag= s1.substr(1,s1.find("/")-1);
        tag = tag +".";
        cout<<"\n tag :"<< tag;
        tag_vec.push_back(tag);
        s1= s1.substr(s1.find("/")+1);
        cout<<"\n stirng :"<< s1;
        }

   // }


 return 0;
}











 /*
    for (int i = 0; i < s1.length(); i++)
    {= s1.find(1, 5);



    int j = 0;

    for (int i = 0; i < s1.length(); i++)
    {
        if (char_array[i] == ' ')
        {
            vec1.push_back(i);
        }
    }

    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    // int ln =sizeof(in)/sizeof(in[0]);
    //  for(int i=0; i<vec1.end();i++)
    //  {
    //      cout<<in[i]<<" ";
    //  }

    cout << "\n ~~~~~~~~~~~~~~~~~~~";
    // string sub = s1.substr(1,s1.find("/")-1); // tag1

    // string sub1 = s1.substr(s1.find("/")+1,s1.find("/")); // value

    // string sub1 = s1.substr(s1.find(" ")+1,s1.find(" "));
    string sub1 = s1.find(1, 5);

    // cout<<"\n value is :"<<sub;
    cout << "\n value is :" << sub1;
    // for(int i=0; i<s1.size();i++)
    // {
    //     if(s1[i] == ' ')
    //     {

    //     }

    // }*/
   