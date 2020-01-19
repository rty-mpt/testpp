//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//void remove_all(multimap<int, string> someMap, string& someName);
//
//int main()
//{
//	multimap<int, string> myMap = { {1, "God"},{2, "Is"},{3, "Just"},{4, "A"},{5, "Joke"},{6, "For"},{7, "Every"},{8, "Weak"},{9, "Person"},{10, "God"} };
//	cout << "Enter somebody's name: ";
//	string myName;
//	cin >> myName;
//	remove_all(myMap, myName);
//	
//	return 0;
//}
//
//void remove_all(multimap<int, string> someMap, string& someName) {
//	cout << "Deleting '" + someName + "' from database\nNow database include:" << endl;
//
//	for (auto it = someMap.begin(); it != someMap.end(); ++it) {
//
//		if (someMap.rbegin()->first == it->first)
//		{
//			it = someMap.erase(it);
//			break;
//		}
//
//		else if (it->second == someName && someMap.rbegin()->first != it->first) {
//			{
//				it = someMap.erase(it);
//
//				if (it->second == someName)
//					continue;
//			}
//		}
//		cout << it->first << " : " << it->second << endl;
//	}
//}