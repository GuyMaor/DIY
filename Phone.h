#ifndef PHONE_SND
#define PHONE_SND
#include "Messages.h"
void init_phone();

//Makes an attempt to connect to cellular data.
//Returns 1 if successful, 0 if not.
char send_by_phone(MESSAGE m);

#endif