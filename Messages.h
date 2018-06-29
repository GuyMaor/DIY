#ifndef MSG_H
#define MSG_H

typedef struct mess_strct
{
	int id;
	char jump;
} MESSAGE;

void init_messages();

//Implemented by Messages and called by Coordinator
void snd_msg(MESSAGE m);

//Implemented by Coordinator and called by Messages.c
void rcv_msg(MESSAGE m);
#endif