#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

bool comp (int first, int second ){
    return  first > second;
}

int main()
{
    vector <int> mas(10);
    vector <int>::iterator  it;


    srand(time(NULL));
    for(int i = 0; i < mas.size(); i++){
        mas[i] = 1 + rand()%10;
    }

    for(it = mas.begin(); it!=mas.end(); it++){
        cout << *it << " ";
    }

    cout << endl;
    for(int i = 11; i < 20; i++){
        mas.push_back(i);
    }



    cout << "NEW VECTOR ";
    for(it = mas.begin(); it!=mas.end(); it++){
        cout << *it << " ";
    }

    cout << endl;



    mas.insert(mas.begin(), 100);

    cout << "NEW VECTOR_1 ";
    for(it = mas.begin(); it!=mas.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << mas.front() << endl;
    sort(mas.begin(), mas.end());

    cout << "SORT ";
    for(it = mas.begin(); it!=mas.end(); it++){
        cout << *it << " ";
    }

    sort(mas.begin(), mas.end(), comp);

    cout  << endl << "SORT VECTOR WITH COMP  ";
    for(it = mas.begin(); it!=mas.end(); it++){
        cout << *it << " ";
    }


}

