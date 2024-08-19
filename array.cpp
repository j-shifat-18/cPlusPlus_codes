#include<iostream>

int main()
{
    std::string names[]={"nadia","shifat","nafiz"};
    
  /*
   for(int i=0;i<sizeof(name)/sizeof(std::string);i++){
        std::cout<<name[i]<<"\n";
    }

  */ 

    //foreach loop

   for(std::string name:names){
    std::cout<<name<<"\n";
   }  

   int numbers[]={1,2,5,6};
   
   for(int num:numbers){
    std::cout<<num<<"\n";
   }

    return 0;
}