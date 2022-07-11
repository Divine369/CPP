#include <iostream>
#include <vector>
using namespace std;

void display(vector <string> &v){
    cout << "Size: " << v.size() << ", Capacity: " << v.capacity() << endl;
    cout << "Content of the vector: " << endl;
    for(vector <string>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << ", ";
    }
    cout << endl;
}

int main(){
    vector <string> names {"John", "Ravi", "Dan", "Tony", "Matt", "Kane", "Mahesh"};
    display(names);

    names.front() = "AAA";
    display(names);

    names.back() = "ASD";
    display(names);

    names.erase(names.begin());
    display(names);

    names.erase(names.begin(), names.begin() + 2);
    display(names);

    names.erase(names.begin() + names.size() - 2, names.begin() + names.size()); // names.end() can also be used
    display(names);

    names.insert(names.begin() + 1, "WWW");
    display(names);

    names.pop_back();
    display(names);

    vector <int> v {10, 20, 30, 40, 50};
    int *p = v.data();

    *(p + 2) += 5;
    for(int i = 0; i < 5; i++){
        cout << p[i] << endl;
    }

    cout << "content printed using vector object" << endl;
    for(int k:v){
        cout << k << " ";
    }
    cout << endl;

    return 0;
}
