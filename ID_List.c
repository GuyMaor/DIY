#include "ID_List.h"

int id_list [MAX_IDS];

void init_id_list()
{
	clear_ids();
}

char add_id(int id)
{
	int hash = id%MAX_IDS;
	int i;
	for(i = 0; i<MAX_IDS; i++)
	{
		if(!id_list[hash])
		{
			id_list[hash] = id;
			return 1;
		}
		hash++;
		hash%=MAX_IDS;
	}
	return 0;
}
void clear_ids()
{
	int i;
	for(i = 0; i<MAX_IDS; i++)
	{
		id_list[i] = 0;
	}
}

char in_list(int id);
{
	int  hash = id%MAX_IDS;
	int i;
	for(i = 0; i<MAX_IDS; i++)
	{
		if(id_list[hash] == id)
			return 1;
		hash++;
		hash%=MAX_IDS;
	}
	return 0;
}
