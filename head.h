typedef struct		s_stack
{
	struct s_stack	*next;
	char			data;
}					t_stack;

t_stack				*create_node(char data);
void				push(t_stack **head, char data);
char				pop(t_stack **head);

