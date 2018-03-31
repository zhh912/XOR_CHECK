include	"XOR_CHECK.h"


unsigned	char	XOR_Check(unsigned	char	*s,unsigned	short	len)
{
	unsigned	short	loopi	=	0;
	unsigned	char	result	=	0;
	
	result	=	*s;
	
	for(loopi=1;loopi<len;loopi++)
	{
		result	=	result^(*(s+loopi));
	}
	//
	
	return	result;
}
//