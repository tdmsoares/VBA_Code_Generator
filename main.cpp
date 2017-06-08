#include <cstdlib>
#include <iostream>
#include <string>
#include "GetterSetters_Generator.h"
#include "Clipboard_Helper.h"

using namespace std;

int main(int argc, char *argv[])
{
    system("CLS");
    cout << "===========================================================\n";
    cout << "             GettersSetters_VBA_Classes                     \n";
    cout << "===========================================================\n\n";
    cout << "                      DESCRIPTION                          \n\n";
    cout << "Returns the Let and Get properties to be used in VBA module\n "
            "classes (they are equivalent as Getters and Setters).\n "
            "Just fill the property data required and the Property\n "
            "Statement and will be in clipboard, in a simple Way!\n\n";
    cout << "===========================================================\n\n";
    char confirmation;
    //
    //Let Property
    cout << "\n\n -> Property Let\n\n";     
    cout << "Generate Let Property? Y (Yes) or N (No): ";
    cin >> confirmation;
    if(confirmation == 'Y' || confirmation == 'y'){
        if(sendToClipBoard(getLetProperty())){
            cout << "Let Property: Successfull in Clipboard!\n";
            system("PAUSE");
        }                      
    }
    //
    //Get Property
    cout << "\n\n -> Property Get\n\n";
    cout << "Generate Get Property? Y (Yes) or N (No): ";
    cin >> confirmation;
    if(confirmation == 'Y' || confirmation == 'y'){  
        if(sendToClipBoard(getGetProperty())){
            cout << "Get Property: Successfull in Clipboard!\n";
            //system("PAUSE");                                
        }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
