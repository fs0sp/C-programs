Algorithm InsertAtEnd()
{
	if(Start==NULL)
	{
		last = new1;
		start = new1;
	}
	
	else
	{
		last->next = new1;
		last = new1;
	}
	
	last->next = NULL;
}
