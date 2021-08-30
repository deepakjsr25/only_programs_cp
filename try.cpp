#include <bits/stdc++.h>
// #include <boost/lexical_cast.hpp>// for lexical_cast()
// string stri = to_string(i_val);
using namespace std;

const int num = 7;

#define loop(i, n) for (int i = 0; i < n; i++)

// void example(vector<vector<int>> v)
// {
//     cout << v[0][2];
// }

//*max_element(v.begin() , v.end())
//rotate(v.begin() , v.begin() + n/2 ,v.end())

template <typename T>
class example
{
public:
    T var1;
    T var2;
    void func(T x)
    {
        cout << x << endl;
    }
};

bool compare(char a, char b)
{
    return a < b ? 1 : 0;
}

int main()
{
    // int n;
    // cin>>n;
    // cout<<"hello";

    // int k = 1000000000 ;
    // cout << k;

    // vector<int> v;
    // vector<vector<int>> v(4, vector<int>(5, 0));

    // // for (int i = 0; i <4; i++)
    // // {
    // //     for (int j = 0; j < 4; j++)
    // //         cout << v[i][j] << " ";
    // //     cout << endl;
    // // }

    // cout<<v.size()<<"  "<<v[0].size();

    // example(v);

    // vector<int> v2(4,3);

    // for(int i = 0 ; i< 4; i++)
    //   cout<<v2[i]<<" ";

    // deep:

    //     cout << "fdfs";
    //     goto deep;

    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(4);

    // cout << v.front() << endl;
    // v.;
    // cout << v.front() << endl;
    // v.pop_back();
    // cout << v.front() << endl;
    // v.pop_back();

    // deque<int> dq;

    // string s ;
    // char ch = 'a';

    // s.push_back(ch);

    // cout << s.empty();

    // stack<int> s;
    // s.pop();

    // v.push_back(5);
    // v.push_back(6);

    // cout << v[0] << v.size();

    priority_queue<int> pq;
    // pq.

    pq.push(7);
    pq.push(4);
    pq.push(3);
    pq.push(10);                     //stores duplicate elements in decresing elements in decresing order
    pq.push(8);
    pq.push(3);

    while (!pq.empty())
    {
        cout << pq.top();
        pq.pop();
    }

    // set<int> s;
    // s.insert(7);
    // s.insert(4);
    // s.insert(3);
    // s.insert(10);
    // s.insert(8);
    // s.insert(3);                     does not store duplicate elements . stores in increasing  order

    // // while (!s.empty())
    // // {
    // //     cout << ;
    // // }

    // for (auto it : s)
    // {
    //     cout << it;
    // }

    // char c = '0';
    // int k = c - 48;

    // cout << k;

    // vector<char> v;
    // v.push_back('f');
    // v.push_back('g');
    // v.push_back('c');
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('d');
    // v.push_back('e');

    // sort(v.begin(), v.end());

    // loop(i, v.size())
    //         cout
    //     << v[i];

    // string s = "deepak";

    // vector<char> v;

    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('#');
    // v.push_back('c');
    // v.push_back('#');

    // // iterator
    // auto it = find(v.begin(), v.end(), '#');
    // cout << it - v.begin();

    // v.ba
    // sort(s.begin(), s.end());
    // cout << s;
    // cout << s.find("ae");
    // cout << s.find("pak");
    // cout << s;

    //********************************************************unodered map

    // unordered_map<char, double> umap;
    // s = "deep";
    // inserting values by using [] operator
    // umap['s'] = 3.14;
    // umap.insert(make_pair("PI", 3.14));
    // umap["root2"]++;
    // umap["root3"] = 1.732;
    // umap["log10"] = 2.302;
    // umap["loge"] = 1.0;

    // co

    // umap['d']++;
    // umap['e']++;
    // umap['e']++;
    // umap['p']++;
    // umap['a']++;
    // umap['k']++;

    // cout << t[0];

    //     loop(i, l2)
    //         umap[t[i]]++;

    //     //  umap.find('d')

    //     // unordered_map<string, double>::iterator itr;
    //     cout
    //      << "\nAll Elements : \n";
    // for (auto itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     // itr works as a pointer to pair<string, double>
    //     // type itr->first stores the key part  and
    //     // itr->second stores the value part
    //   cout << itr->first << "  "   << itr->second << endl;
    // }

    //********************************************************unodered map

    // cout << s;
    // s.empty();

    // cout << 10e9 + 7;
    // cout << 2 * * 3;

    //********************************************* templete class example

    // example<int> obj;
    // obj.func(5);

    // example<float> obj2;
    // obj2.func(5.345);

    // example<char> obj3;
    // obj3.func('d');

    //********************************************* templete class example

    // vector<int> v(5);

    // for (auto &it : v)
    //     cin >> it;

    // for (auto it : v)
    //     cout << it;

    // for (int i = 0; i < 10; ++i)
    // {
    //     int j = i;
    //     int *ptr = &j;
    //     cout << *ptr << '\n';
    // }
    // array<int, 4> p;
    // p[0] = 1;
    // cout << p[0];

    // example<int> objwda;

    //  string s ="deepak";
    //  cout<<s.substr(2,4);

    //#####################  pointer and reference samme
    // float a = 'A' + 'A' + 'A';
    // // int *b = &a;
    // // cout << a<<"  "<< --*(b) <<"  "<<a;

    // // cout<<1.6%4.0;
    // cout << 'A' + 'A' + 'A';
}

//*******************height of tree*******************

// int height(node* node)
// {
//     /* base case tree is empty */
//     if (node == NULL)
//         return 0;

//     /* If tree is not empty then
//     height = 1 + max of left
//         height and right heights */
//     return 1 + max(height(node->left),
//                    height(node->right));
// }

//################################### MInimum depth of a tree ################################

//  int minDepth(TreeNode* root) {

//         if(root == NULL)
//             return 0;

//         if(root->left == NULL && root->right == NULL)
//             return 1;

//         if(root->left != NULL  && root->right == NULL )
//         {
//            return 1 + minDepth(root->left);
//         }

//         if(root->left == NULL && root->right != NULL)
//         {
//            return 1 + minDepth(root->right);
//         }

//         // if(root->left != NULL && root->right != NULL)
//             return 1 + min(minDepth(root->left),minDepth(root->right));

//     }
