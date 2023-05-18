#include <iostream>
#include <cstring>
 
namespace Utilities{
 
class string{
    public : 
    string(const char* data, size_t size = 15 ){
        m_data = new char [size];
        std::strcpy(m_data,data );
    }
 
    ~string(){
        delete [] m_data;
    }
    private : 
 
     char * m_data{nullptr};
};
}
 
using namespace std;
 
 
int main()
{
    cout << "Winter is coming" << endl;
    ::string message ("Hello World!");
    cout << message << endl;
    return 0;
}