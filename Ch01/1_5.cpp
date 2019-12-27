////1.5 Scope and lifetime
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> vec;			//vec is global(int type global vector)
//
//struct Record {
//	string name;			// name is member of Record(String member)
//	// ...
//};
//
//void fct(int arg)			// fct is global(global function)
//// arg is local(integer argument)
//{
//	string motto{ "Who dares wins" };	//motto is local
//	auto p = new Record{ "Hume" };		// p points to Record made with (new)
//	//...
//}