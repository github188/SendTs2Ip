// stdafx.cpp : source file that includes just the standard includes
//	SendTs2Ip.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

bool g_ShowMSG=true;
void setShowMsg(bool bShowMsg)
{
	g_ShowMSG = bShowMsg;
}
bool getShowMsg()
{
return g_ShowMSG;
}