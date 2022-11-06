#include <iostream>

using namespace std;

int main()
{
    char vowels[] {'a', 'e', 'i', 'o','u'};
    cout<<vowels[0]<<endl;
//    cin>> vowels[5];//out of bound
    double hi_tamps[]{100,101,101,7,102,105.3};
    cout<<hi_tamps<<endl;
    hi_tamps[0] =98.5;
    cout<<hi_tamps<<endl;

	return 0;
}
