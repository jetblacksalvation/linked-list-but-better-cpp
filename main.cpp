// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "class_def.hpp"
//windos 
//g++ main.cpp ; ./a.exe
//unix - 
//g++ main.cpp && ./a.exe
// apple
//cringe++ cinge.mpp && ./a.cringe

int main()
{
    tree values({ {"bob", "1235"}, {"joe", "315"}, {"john", "32"}});
    //values.print_nodes();
    values.insert(pair<std::string,std::string>({"fdafdas", "fa"}), 0);
    values.print_nodes();
    
    //std::cout << values.next->next->id << " is the id ," << values.next->next->name <<  " is the name\n";
    std::cout << "Hello World!\n";
    auto ptr = values.get_root_ptr();
    std::cout<<ptr->name;
}
