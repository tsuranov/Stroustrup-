#include <string>
#include <queue> 

using namespace std;

struct Tnode {
	string word;
	int count;
	Tnode* left;
	Tnode* right;
};
void insert(Tnode** node, string word, int count)
{
	if((Tnode*)(*node) == NULL)
	{
		(*node) = new Tnode();
		(*node) -> word = word;
		(*node) -> count = count;
		return;
	}
	
	Tnode** tmp = node;
	queue<Tnode**> qnode;
	qnode.push(tmp);
	
	for(;;)
	{
		tmp = qnode.front();
    	qnode.pop();
    	
		if((Tnode*)(*tmp) != NULL)
		{
			qnode.push(&(*tmp) -> left);
			qnode.push(&(*tmp) -> right);
		}
		else	
		{
			(*tmp) = new Tnode();
			(*tmp) -> word = word;
			(*tmp) -> count = count;
			return;
		}
	}
	return;
}
//
int main (void)
{
	Tnode* root;
	insert(&root, "qq", 1);
	insert(&root, "ww", 2);
	insert(&root, "ee", 3);
	insert(&root, "rr", 4);
	return 0;
}
