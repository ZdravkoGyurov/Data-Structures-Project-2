#include <iostream>
#include <vector>
#include "CompleteBinaryTree1.cpp"
#include "CompleteBinaryTree2.cpp"
#include "CompleteBinaryTree3.cpp"
#include "CompleteBinaryTree4.cpp"
using namespace std;

int main()
{
	vector<string> v;
	string name;

	ChainTree<string> chTree;
	v = chTree.GetParticipants();
	chTree.FillTree(v);
	chTree.Tournament();
	chTree.AllBattles();
	cout << "Name of participant: ";
	cin >> name;
	chTree.FindPath(name);

	CmpBinTree<string> t;
	v = t.GetParticipants();
	t.filltree(v);
	t.Tournament();
	t.allFights();
	cout << "Name of participant: ";
	cin >> name;
	t.findpath(name);

	Tree<string> tree;
	v = tree.GetParticipants();
	tree.FillTree(v);
	tree.Tournament();
	tree.allFights();
	cout << "Name of participant: ";
	cin >> name;
	tree.findpath(name);

	//RootTree<string> A;

	return 0;
}