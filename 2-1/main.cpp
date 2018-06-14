#include <iostream>
#include<thread>

using namespace std;

void do_some_work();


int main()
{
    std::thread my_thread(do_some_work);
    return 0;
}
