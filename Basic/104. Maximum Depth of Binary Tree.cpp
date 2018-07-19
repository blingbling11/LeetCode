/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	/* Depth First */
	int maxDepth(TreeNode* root) {
		int l = 0, r = 0;
		if (root == NULL)
			return 0;

		if (root->left) {
			l = maxDepth(root->left);
		}
		if (root->right) {
			r = maxDepth(root->right);
		}
		return (l>r) ? l + 1 : r + 1;
	}
	/*
	int maxDepth(TreeNode *root) {
		return root == NULL ? 0 : max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
	}
	*/

	/* Breadth First */
	/*
	int maxDepth(TreeNode *root)
	{
		if (root == NULL)
			return 0;

		int res = 0;
		queue<TreeNode *> q;
		q.push(root);
		while (!q.empty())
		{
			++res;
			for (int i = 0, n = q.size(); i < n; ++i)
			{
				TreeNode *p = q.front();
				q.pop();

				if (p->left != NULL)
					q.push(p->left);
				if (p->right != NULL)
					q.push(p->right);
			}
		}

		return res;
	}
	*/
};