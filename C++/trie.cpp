#include <bits/stdc++.h>

using namespace std;
class trie{

    public:
        char val;
        bool end=false;
        trie* children[26]={NULL};
};

void insert(trie* root, string str)
{
    trie* temp=root;
    for(int i=0; i<str.length(); i++)
    {
        if(!temp->children[str[i]-'a'])
        {
            temp->children[str[i]-'a']= new trie();
        }
        temp=temp->children[str[i]-'a'];
    }
    temp->end=true;
    cout<<"value successfully Inserted"<<endl;
}

void search(trie* root, string str)
{
    trie* temp=root;
    for(int i=0; i<str.length(); i++)
    {
        if(temp->children[str[i]-'a']==NULL)
        {
            cout<<" Given value Not Found"<<endl;

        }
        temp=temp->children[str[i]-'a'];
    }
    if(temp->end==true)
    {
         cout<<" Given value successfully Found"<<endl;
    }
    else
    {
        cout<<" Given value Not Found"<<endl;
    }
}

void del(trie* root, string str)
{
    trie* temp=root;
    for(int i=0; i<str.length(); i++)
    {
        if(temp->children[str[i]-'a']==NULL)
        {
            cout<<"Given value is not present"<<endl;

        }
        temp=temp->children[str[i]-'a'];
    }

    if(temp->end==true)
    {
        temp->end=0;
        cout<<"value successfully deleted"<<endl;
    }
    else
    {
        cout<<"Given value is not present"<<endl;
    }

}
int main()
{
    trie* root=new trie();
    cout<<"please enter string"<<endl;
    string str;
    cin>>str;
    insert(root,str);
    search(root,str);
    del(root,str);
    return 0;
}
