struct node {
    int data; //Data part
    struct node *next; //Address part
};

int test_traverselist_0(){
	int n = 2;
	struct node *head = = (struct node *)malloc(sizeof(struct node));

	struct node *newNode, *temp;
    int data, i;

    if(head == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        /*
         * Reads data of node from the user
         */
        head->data = 22; //Links the data field with data
        head->next = NULL; //Links the address field to NULL
 
        temp = head;
 
        /*
         * Creates n nodes and adds to linked list
         */
        
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }
        else
        {
            newNode->data = 44; //Links the data field of newNode with data
            newNode->next = NULL; //Links the address field of newNode with NULL

            temp->next = newNode; //Links previous node i.e. temp to the newNode
            temp = temp->next; 
        }
    }
	return traverselist(head);
}