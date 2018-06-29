#include <stdio.h>
#include "Messages.h"
#include "Constants.h"
#include "ID_List.h"
void rcv_msg(MESSAGE m)
{
	//Drop it if you've seen this message before.
	if(in_list(m.id))
		return;
	//First attempt to send by phone.
	if(send_by_phone(m))
		return;
	else //Attempt to broadcast.
	{	
		if(!m.jump) //Drop if max jumps have reached.
		{
			m.jump--;
			snd_msg(m);
		}
			
	}
	add_id(m.id); //Mark that message has been received.
}