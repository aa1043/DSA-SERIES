#include<iostream>
using namespace std;
int main()
{
    vector<int>v;
    v.emplace_back(3);
    v.emplace_back(4);//3 4 
    vector<int>v1(5,100);//100 100 100 100 100 
    vector<pair<int,int>>vec;
    vec.emplace_back(5,6);
    vec.emplace_back(9,6);
    vec.emplace_back(5,0);
    vector<int>v3(v1);//100 100 100 100 100 (Copies the elements of v1 into v3)
    v1.emplace_back(54);//100 100 100 100 100 54  size was 5 but still it accepted 54 cause vector is no rigid
    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)// it means it points directly to the memory
    {    
       cout<<*(it)<<" ";
    }
    cout<<endl;
    //   FOR PRINTING PAIRS
    cout<<"[";
    for(vector<pair<int,int>>::iterator it=vec.begin();it!=vec.end();it++)
    {
        cout<<"{"<<it->first<<" "<<it->second<<"},";
    }
    cout<<"]"<<endl;
    // SO APPARENTLY THERE ARE SOME ITERATORS TOO
    //vector<int>::iterator it=v1.rend();// NOW REMEMBER V.rend()it always points to one position before the first variable  NEVER USED
    //vector<int>::iterator it=v1.rbegin();// IT WILL POINT TO THE LAST VARIABLE BUT it++ in this case will move forwards like last variable then second last then third last
    vector<int>::iterator it=v1.end();// NOW REMEMBER V.end()it always points to one position after the last variable
    it--;
    cout<<*(it)<<endl;//54 
    // WE CAN ALSO PRINT USING
    for(auto it=v1.begin();it !=v1.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // To delete single elements
    v1.erase(v1.begin());// always start from where you want to delete to the next address of the last element
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*(it)<<" ";
    }

    // To delete multiple elements
    v1.erase(v1.begin(),v1.begin()+5);// always start from where you want to delete to the next address of the last element
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // INSERTION
    v.insert(v.begin(),34);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";//34 3 4  like it inserts 34 in the begining
    }
    cout<<endl;
    v.insert(v.begin()+1,3,5);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";//34 5 5 5 3 4 for multiple element first position then how many then what
    }
    cout<<endl;
    v.insert(v.begin(),v1.begin(),v1.end());
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";//100 100 100 100 100 54 34 5 5 5 3 4 it inserts a whole vector into that vector
    }
    cout<<endl;

    //TO SWAP TWO VECTORS

    v1.swap(v);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*(it)<<" ";
    }
    v1.clear();
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<v1.empty();
}