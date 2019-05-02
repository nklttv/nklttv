#include "stdafx.h"
#include "egg.h"

#define MAXMODULE 50

char module[MAXMODULE]; 

 __declspec(dllexport) bool egg::breaking(string who) 
{
    this->say(who+"is trying to break me!");
	return false;

}

 __declspec(dllexport) void egg::say(string text) 
{
    

	cout << this->size << " say " << text; 
	return;
}