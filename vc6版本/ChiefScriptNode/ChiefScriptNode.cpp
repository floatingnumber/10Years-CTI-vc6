// ChiefScriptNode.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"
#include <afxdllx.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


static AFX_EXTENSION_MODULE ChiefScriptNodeDLL = { NULL, NULL };

extern "C" int APIENTRY
DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	// Remove this if you use lpReserved
	UNREFERENCED_PARAMETER(lpReserved);

	#ifdef _DEBUG
		afxMemDF = allocMemDF | checkAlwaysMemDF;
	#endif //_DEBUG

	if (dwReason == DLL_PROCESS_ATTACH)//进程被调用
	{
		TRACE0("CHIEFSCRIPTNODE.DLL Initializing!\n");
		
		// Extension DLL one-time initialization
		if (!AfxInitExtensionModule(ChiefScriptNodeDLL, hInstance))
			return 0;
		
		// Insert this DLL into the resource chain
		// NOTE: If this Extension DLL is being implicitly linked to by
		//  an MFC Regular DLL (such as an ActiveX Control)
		//  instead of an MFC application, then you will want to
		//  remove this line from DllMain and put it in a separate
		//  function exported from this Extension DLL.  The Regular DLL
		//  that uses this Extension DLL should then explicitly call that
		//  function to initialize this Extension DLL.  Otherwise,
		//  the CDynLinkLibrary object will not be attached to the
		//  Regular DLL's resource chain, and serious problems will
		//  result.

		new CDynLinkLibrary(ChiefScriptNodeDLL);
	}
	else if (dwReason == DLL_PROCESS_DETACH)//进程被停止
	{
		TRACE0("CHIEFSCRIPTNODE.DLL Terminating!\n");
		// Terminate the library before destructors are called
		AfxTermExtensionModule(ChiefScriptNodeDLL);
	}
	return 1;   // ok
}

// Exported DLL initialization is run in context of application   
// or Regular DLL.   

/*

extern "C" _declspec(dllexport)  void WINAPI Init_ChiefScriptNodeDLL() 
 {       
	// Create a new CDynLinkLibrary for this app.       
	new CDynLinkLibrary(ChiefScriptNodeDLL);       

}
*/

 