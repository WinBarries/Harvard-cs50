///////////////////////////
// Author: Kabir Bolatito

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    list<int>  intList5;   //Line 1
    
    ostream_iterator<int> screen(cout, " ");            //Line 2
    

    
    intList5.push_back(74);                             //Line 3
    intList5.push_back(11);                             //Line 4
    intList5.push_back(19);                             //Line 5
    intList5.push_back(21);                             //Line 6
    intList5.push_back(21);                             //Line 7
    
    cout << "Line 8: intList5: ";                       //Line 8
    copy(intList5.begin(), intList5.end(), screen);
    cout << endl;
    
    intList5.push_front(2);                             //Line 9
    
    cout << "Line 10: Adding & pushing int 2 to the front: ";     //Line 10
    copy(intList5.begin(), intList5.end(), screen);
    cout << endl;
    
    intList5.pop_back();                                //Line 11
    
    cout << "Line 11: Remove the last element in intList5: ";                //Line 12
    copy(intList5.begin(), intList5.end(), screen);
    cout << endl;
    
   // intList5.insert(intList5[1], 8);                             //Line 13
    list<int>::iterator itr = find(intList5.begin(), intList5.end(), 11);
    intList5.insert(itr, 5);
    
    cout << "Line 14: Insert 5 before 11: ";   //line 14
    copy(intList5.begin(), intList5.end(), screen);
    cout << endl;
    
    itr++;
    intList5.erase(itr);
    cout << "Line 15: Erase the element after 11: ";   //line 15
    copy(intList5.begin(), intList5.end(), screen);
    cout << endl;
    
    intList5.clear();
    cout << "Line 16: Clear intList5: ";   //line 16
    copy(intList5.begin(), intList5.end(), screen);
    cout << endl;
    
    return 0;
}
