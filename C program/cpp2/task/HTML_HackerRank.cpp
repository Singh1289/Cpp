#include <vector>
#include <iostream>
#include <string>
#include <array>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, no_tag, no_query;
    cin >> no_tag;
    cin >> no_query;
    cin.ignore();        // take new line so..... to clear the buffer

    string tag, value, att, temp;
    vector<string> input, query, tag_vec;
    map<string, string> map_tag;
    /*

    <tag1 name = "abhi" city = "pune">
    <tag2 place = "delhi">
    </tag2>
    </tag1>

    Query
    tag1.tag2~place
    tag1~city
    tag1~place

    */
    // populating tag vector
    cout << "\n enter tags :\n";
    for (i = 0; i < no_tag; i++)
    {
        cout << i << endl;
        getline(cin, temp);
        input.push_back(temp);
    }
    cout << i << endl;
    // input.push_back("<tag1 value = "Helloworld" name = "Abhi">");
    // input.push_back("<tag2 city = "pune">");
    // input.push_back("</tag2>");
    // input.push_back("</tag1>");

    // populating query vector
    cout << "\n enter query :\n";
    for (i = 0; i < no_query; i++)
    {
        getline(cin, temp);
        query.push_back(temp);
    }
    // query.push_back("tag1.tag2~city");
    // query.push_back("tag1.city");
    // query.push_back("tag1~value");
    // query.push_back("tag1~name");

    for (auto s : input)
    {

        while (s.size() != 1)
        {
            // to pop from tag_vec
            if ((s[0] == '<') && (s[1] == '/'))
            {
                tag_vec.pop_back();
                for (auto i : tag_vec)
                {
                    cout << "\n remaining vector tag :";
                    cout << i << "\n";
                }
                break;
            }

            // find tag
            if (s[0] == '<')
            {
                tag = s.substr(1, s.find(" ") - 1);
                // cout << "\n tag :" << tag;
                tag_vec.push_back(tag);
                s = s.substr(s.find(" ") + 1);
                // cout << "\n stirng :" << s;
            }
            else
            {
                if (s[0] == '=')
                {
                    s = s.substr(s.find('"') + 1);
                    value = s.substr(0, s.find('"'));
                    // cout << "\n"<< value;
                    s = s.substr(s.find('"') + 1);
                }
                else
                {
                    tag = s.substr(0, s.find(" "));
                    // cout << "\ntag 01: " << tag;
                    att.clear();
                    for (auto i : tag_vec)
                    {
                        att = att + i + ".";
                        cout << i << " ";
                    }
                    // cout << "\natt:" << att << "\n";
                    att = att.substr(0, att.rfind('.')) + "~" + tag;
                    // cout << "\natt check:" << att << "\n";
                    s = s.substr(s.find(" ") + 1);
                    // cout << "\nrest string: " << s;
                }
            }
            if (!att.empty() && !value.empty())
            {
                map_tag[att] = value;
                att.clear();
                value.clear();
            }
        }
    }
    // printing tag_vector
    cout << "\nprinting tag_vector";
    for (auto i : tag_vec)
    {
        // tag = tag + ".";
        cout << "\n"
             << i;
    }

    map<string, string>::iterator it = map_tag.begin();

    cout << "\nprinting map\n";
    while (it != map_tag.end())
    {
        cout << it->first << "  :  " << it->second << endl;
        ++it;
    }

    cout << "\n remaining vector tag :";
    for (auto i : tag_vec)
    {
        cout << i << "\n";
    }

    cout << "\n query vector :\n";
    for (auto i : query)
    {
        cout << i << "\n";
    }

    // output
    cout << "\nOutput: \n";
    for (auto it : query)
    {
        map<string, string>::iterator itr = map_tag.find(it);
        if (itr != map_tag.end())
            cout << itr->second << "\n";
        else
            cout << "Not Found.!\n";
    }

    return 0;
}