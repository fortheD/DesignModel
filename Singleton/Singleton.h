#ifndef DESIGN_MODEL_SINGLETON
#define DESIGN_MODEL_SINGLETON
#include <iostream>
using namespace std;
class Singleton {
 public:
    Singleton* GetInstance();
 private:
    static Singleton* m_instance;
    Singleton(){}
};

#endif
