#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int j,i=0;
    int number[10000];
    string line;
    fstream myfile;
    myfile.open("data10k.txt");
    while(myfile.good())
    {
        getline(myfile,line);
        stringstream(line)>>number[i];
        i++;
    }
        for (i=0;i<10000;i++)
        {
            for(j=0;j<10000;j++)
            {
                if(number[i]<number[j])
                {
                   swap(number[i],number[j]);
                }
            }
        }
myfile.close();
for (i=0;i<10000;i++)
    {
        cout<<number[i]<<endl;
    }
    return 0;
}
