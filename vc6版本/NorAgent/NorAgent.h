#if !defined(AFX_FORMX_H__AFDC158D_F993_11D1_96ED_F05F03C10000__INCLUDED_)
#define AFX_FORMX_H__AFDC158D_F993_11D1_96ED_F05F03C10000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

// NorAgent.h : main header file for NORAGENT.DLL

#if !defined( __AFXCTL_H__ )
	#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CNorAgentApp : See NorAgent.cpp for implementation.

class CNorAgentApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FORMX_H__AFDC158D_F993_11D1_96ED_F05F03C10000__INCLUDED)
