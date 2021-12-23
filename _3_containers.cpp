/*-- Brief --*/
/*

    using stl:: to practice several sequential containers
    
    vector<>
    deque<>
    
    ...
    and more

*/

#include <vector>
#include <deque>

void myTestDeque()
{
    deque<uint8_t*> buffer(3);
    buffer[0]=new uint8_t[2560*832];
    buffer[1]=new uint8_t[2560*832];
    buffer[2]=new uint8_t[2560*832];
    
    delete[] buffer;
}

void myTestVector()
{
    vector<double> v {1.0 ,2.9 ,5.2 ,0.3 ,10.5};
    
    vecotr<int> v1 {1, 2, 5, 0, 10};
    
    double max = *max_element(v.begin(), v.end());
    double min = *min_element(v.begin(), v.end());
}


    
using namespace std;
int main()
{
    int idx = 0;
    while(begin !=end){
        *begin = val;
        ++begin;
    }    
    idx++;
        
    return;
}