

#ifndef RB_NODE_HPP
#define RB_NODE_HPP

namespace ft
{
	template <class T>
	struct RB_Node
	{
		public:
	
			T		key_value;
			bool 	black;
			RB_Node	*left;
			RB_Node	*right;
			RB_Node	*parent;
			bool	nil;
	
			RB_Node() : black(true), left(NULL), right(NULL), parent(NULL) {};
			RB_Node(T val, bool _black = true, RB_Node *_left = NULL, RB_Node *_right = NULL, RB_Node *_parent = NULL)
				: key_value(val), black(_black), left(_left), right(_right), parent(_parent) {};
			~RB_Node() {};
	};
} // namespace ft

#endif