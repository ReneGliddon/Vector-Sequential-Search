#include <iostream>
#include <vector>
using namespace std;



template<class Type>
int recSeqSearch(const vector<Type> &a, const Type &x, int sizeLessOne)
{
    int loc;
    bool found = false;
    //for (loc = 0; loc < sizeLessOne; loc++)
    if (a[sizeLessOne] == x)
    {
        found = true;
        return sizeLessOne;
    }
    else
    {
        if(sizeLessOne==0&&!found)
        {
            return -1;
        }
        else
            recSeqSearch(a, x, sizeLessOne - 1);
    }




}


template <class Type>
int sequentialSearch(const vector<Type> &a, const Type &x)
{
    return (recSeqSearch(a, x, a.size()-1));
}


int main()
{


    vector<int> intList;
    int value;
    cout<<"Enter your vector values, ending with -999."<<endl;
    cin>>value;
    int size = 0;
    while(value!= -999)
    {
        intList.push_back(value);
        size++;
        cin>>value;
    }


    cout<<"The vector array is: ";
    for(int i = 0; i < size; i++)
    {
        cout<<intList[i]<<" ";
    }

    int searching;
    cout<<endl<<"What should we search for? ";
    cin>>searching;

    int num = sequentialSearch(intList, searching);

    if (num=-1)
    {
        cout<<"Welp! Not here!";
    }
    else
        cout<<endl<<"Yes, this is in the vector array. It is located at position "<<num+1<<"."<<endl;



    /*
    int n;
    int i = 1;
    int sum = 0;
    cout<<endl<<"Enter n: ";
    cin>>n;

    int j = n;
    while (i < n)
    {
        i*=2;
        sum++;
        cout<<endl<<"Sum = "<<sum;
    }
    while (j > 1)
    {
       j--;
        sum--;
        cout <<endl<<"Second while loop. Sum is "<<sum;
    }*/


return 0;
}
