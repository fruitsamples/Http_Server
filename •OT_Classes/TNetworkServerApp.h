//	TNetworkServerApp.h - Macintosh OpenTransport Network Server Application class object// // Apple Macintosh Developer Technical Support// Written by:  Vinne Moscaritolo////  Copyright (work in progress)  Apple Computer, Inc All rights reserved.//// You may incorporate this sample code into your applications without// restriction, though the sample code has been provided "AS IS" and the// responsibility for its operation is 100% yours.  However, what you are// not permitted to do is to redistribute the source as "DSC Sample Code"// after having made changes. If you're going to re-distribute the source,// we require that you make it clear in the source that the code was// descended from Apple Sample Code, but that you've made changes.// #ifndef _H_TNETWORKSERVERAPP#define _H_TNETWORKSERVERAPP#include "TBackGroundApp.h" //// TNetworkServerApp  - Macintosh OpenTransport Network Server Application class object//class TNetworkServerApp : public TBackGroundApp{// 	CONSTRUCTORS AND DESTRUCTORSpublic:			 TNetworkServerApp();	virtual	~TNetworkServerApp();// HIGH LEVEL FUNCTIONSpublic:	virtual void Start();		// start the application and let it run	virtual void DoIdle();		// call idle handler};#endif