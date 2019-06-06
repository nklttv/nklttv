#include "stdafx.h"
#include "book.h"
#include "chitatel.h"
#include <iostream>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	book a,b,c;
	a.set_name("vojna i mir");
	a.set_year(2001);
	b.set_name("vlastelin kolets");
	b.set_year(2002);
	c.set_name("garry potter i filosofsky kamen");
	c.set_year(2003);
	chitatel first, second, three;
	first.chitatel("Ivanova A.I", 22, a);
	second.chitatel("Karpov S.F.", 17,c);
	three.chitatel("Linnova H.T.", 14,b);
}
