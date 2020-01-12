/* cryptmodule.c - by Steve Majewski
 */

#include "allobjects.h"

#include <sys/types.h>


/* Module crypt */


static object *crypt_crypt(self, args)
	object *self, *args;
{
	return NULL;
}

static struct methodlist crypt_methods[] = {
	{"crypt",	crypt_crypt},
	{NULL,		NULL}		/* sentinel */
};

void
initcrypt()
{
	initmodule("crypt", crypt_methods);
}
