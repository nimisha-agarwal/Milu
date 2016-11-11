int traverselist(struct node *head)
{
    struct node *temp;
    int count = 0;
 
    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); //Prints the data of current node
            count++;
            temp = temp->next; //Advances the position of current node
        }
    }
    return count;
}