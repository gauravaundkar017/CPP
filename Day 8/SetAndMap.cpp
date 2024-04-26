#include <iostream>
#include <set>
#include <map>

using namespace std;

void displayMenu() {
    cout << "-----------------------------" << endl;
    cout << "1. Insert element" << endl;
    cout << "2. Erase element" << endl;
    cout << "3. Find element" << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;
    cout << "-----------------------------" << endl;
}

int main(){
    int ch;
    set<int> mySet;
    multiset<int> myMultiset;
    map <int , string> myMap;
    multimap <int , string> myMultimap;

    do
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch) {
            case 1: {
                int key;
                string value;
                cout << "Enter key: ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                mySet.insert(key);
                myMultiset.insert(key);
                myMap[key] = value;
                myMultimap.insert(make_pair(key, value));
                break;
            }
            case 2: {
                int key;
                cout << "Enter key to erase: ";
                cin >> key;
                mySet.erase(key);
                myMultiset.erase(key);
                myMap.erase(key);
                auto it = myMultimap.find(key);
                while (it != myMultimap.end() && it->first == key) {
                    it = myMultimap.erase(it);
                }
                break;
            }
            case 3: {
                int key;
                cout << "Enter key to find: ";
                cin >> key;
                auto setIt = mySet.find(key);
                if (setIt != mySet.end()) {
                    cout << "Element found in set." << endl;
                } else {
                    cout << "Element not found in set." << endl;
                }
                auto mapIt = myMap.find(key);
                if (mapIt != myMap.end()) {
                    cout << "Element found in map with value: " << mapIt->second << endl;
                } else {
                    cout << "Element not found in map." << endl;
                }
                break;
            }
            case 4: {
                cout << "Set elements: ";
                for (int elem : mySet) {
                    cout << elem << " ";
                }
                cout << endl;

                cout << "Multiset elements: ";
                for (int elem : myMultiset) {
                    cout << elem << " ";
                }
                cout << endl;

                cout << "Map elements: ";
                for (auto const& pair : myMap) {
                    cout << pair.first << ":" << pair.second << " ";
                }
                cout << endl;

                cout << "Multimap elements: ";
                for (auto const& pair : myMultimap) {
                    cout << pair.first << ":" << pair.second << " ";
                }
                cout << endl;
                break;
            }
            case 5: {
                cout << "Exiting program." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (ch != 5);
    
    
    return 0;
}