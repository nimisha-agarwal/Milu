struct node
{
	int key;
	struct node *left, *right;
};

struct node *newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

int test_binarytreeinorder_0(){

	struct node *root = = (struct node *)malloc(sizeof(struct node));
	struct node *temp;

	key = 50;
	if (root == NULL) return newNode(key);

	key = 20;
	if (key < root->key)
		root->left = insert(root->left, key);
	else if (key > root->key)
		root->right = insert(root->right, key);

	key = 80;
	if (key < root->key)
		root->left = insert(root->left, key);
	else if (key > root->key)
		root->right = insert(root->right, key);

	return binarytreeinorder(root);
}