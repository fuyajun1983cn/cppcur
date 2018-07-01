#include <iostream>
#include <thread>

using namespace std;

void do_some_work()
{
  cout<<"I'm doing some work in the thread."<<endl;
}

int main()
{
  std::thread my_thread(do_some_work);
  my_thread.join();
  return 0;
}
