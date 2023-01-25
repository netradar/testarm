#include <iostream>
#include "Poco/Thread.h"
#include "Poco/Runnable.h"
#include "Poco/String.h"
#include "Poco/Glob.h"
#include <sys/signal.h>
#include <pthread.h>
#include <tuple>
#include <vector>
using namespace std;

class Sub;
class Base{
public:
    Base(){

    }
public:
    virtual void vf(){ cout << "some\n";}
};



class Sub: public Base{
public:
    virtual void vf() override{ cout << "other\n";}

};

int main(int, char**) {

    Sub s;

    Base &b = s;

    b.vf();
    cout << "hello" <<endl;// this line is added by others

    cout << " I am not here\n";


}
