#include<iostream>
using namespace std;
int main()
{
    int number,choice,counting_word=0;
    char starting,ending;
    ending='z';
    cout<<"Enter how much names you want to enter ? ";
    cin>>number;
    cout<<"Enter "<<number<<" names\n";
    string names[number],word,find;
    for(int i=0;i<number;i++)
    {
        cout<<"("<<i<<") ";
        cin>>names[i];
    }
    cout<<"\nChoose your method";
    cout<<"\n(1) SORT by Ascending A->Z";
    cout<<"\n(2) SORT by Desending Z->A";
    cout<<"\n(3) Filter data (find any specific word) ";
    start:
    cout<<"\nEnter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"\nYou selected ascending A->Z \n";
        for(starting ='a';starting<=ending;starting++)//staright loop from a to z 
        {
          for(int j=0;j<number;j++)
          {
             word=names[j];
             char extract=word[0];//putting first word of every letter in new variable
             if(extract==starting)//comparison first word to each alphabet  
             {
                cout<<"("<<j<<") ";
                cout<<"\t"<<names[j]<<"\n";
             }
          }
        }
        break;
        case 2://reverse loop from z to a
        cout<<"\nYou selected desending Z->A \n";
        ending='a';
        for(char starting='z';starting>=ending;starting--)
        {
           for(int j=0;j<number;j++)
           {
             word=names[j];
             char extarct=word[0];
             if(extarct==starting)
             {
               cout<<"("<<j<<") ";
               cout<<"\t"<<names[j]<<"\n";
             }
           }
        }
        break;
        case 3:
        cout<<"Enter the name you want to find: ";
        cin>>find;
        for(int j=0;j<number;j++)
        {   
          word =names[j];
         if(word==find)
         {
          cout<<"\n"<<"("<<j<<") ";
          cout<<" "<<word;
          counting_word++;
         }
        }
         cout<<"\n"<<counting_word<<" Results found ";
        break;
        default:
        cout<<"ERROR ! PLEASE INPUT ANY VALID NUMBER 1,2 OR 3\n";
        goto start;
    }
    return 0;
    }
       

    
