#include "Singleton.h"

Singleton* Singleton::m_instance = NULL;

Singleton* Singleton::GetInstance() {
    if(m_instance == NULL)
        m_instance = new Singleton();
    return m_instance;
}
