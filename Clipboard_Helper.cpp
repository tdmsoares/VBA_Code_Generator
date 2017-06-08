#include <windows.h>
#include <iostream>
#include <string>
#include "Clipboard_Helper.h"

bool sendToClipBoard(const std::string &s){
     //Opens the Clipboard
     if(OpenClipboard(0)==false){
         std::cout << "Error: Not Able to OpenClipboard";
         return false;                                              
     }
     //Clears the Clipboard and then gets ownership of clipboard
	 EmptyClipboard();
	 //
     //Memory Management
     //
     //Locks a global memory object and returns a pointer to the 
     //first byte of the object's memory block.	
	 HGLOBAL hg=GlobalAlloc(GMEM_MOVEABLE,s.size());
	 if (!hg){
        CloseClipboard();
		return false;
	 } 
	 //Copies characters between buffers.
	 memcpy(GlobalLock(hg),s.c_str(),s.size());
	 //Decrements the lock count associated with a memory object that was 
     //allocated with GMEM_MOVEABLE.
	 GlobalUnlock(hg);
	 //Places data on the clipboard in a specified clipboard format.
	 SetClipboardData(CF_TEXT,hg);
	 //Close 
	 CloseClipboard();
	 GlobalFree(hg);
     return true;     
}

std::string getFromClipBoard(){
return "";
}
            
