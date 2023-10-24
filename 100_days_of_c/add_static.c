#include "auto.h"

/*value retained after each execution*/ 
/*visible to every other file*/
/*using keyword static limits visibility only to this file*/
static int count = 0;

int increment(void)
{

	count += 1;

	return (count);
}
