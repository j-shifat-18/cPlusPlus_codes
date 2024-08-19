#include<iostream>

void showSort(int array[]);

int main()
{
    int array[10];
    std::cout<<"Enter Marks--\n";
    for(int i=0;i<10;i++)
    {
        std::cout<<"Student "<<i+1<<" :";
        std::cin>>array[i];
    }

    std::cout<<"\n\nRank--\n";

    showSort(array);

    for(int i=0;i<10;i++)
    {
        std::cout<<i+1<<". "<<array[i]<<"\n";
    }




    return 0;
}
void showSort(int array[]){
    int temp;
    for(int i=0;i<10-1;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

}
