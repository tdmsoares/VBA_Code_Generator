#include "GetterSetters_Generator.h"
#include <windows.h>
#include <iostream>

using namespace std;

std::string getLetProperty(){
     /*Get the Let Statement
     * To be used in Class Modules in VBA
     * Equivalent to Setters
     */
    cout << "Digite o Nome da Propriedade: ";
    string propertyName;
    cin >> propertyName;
    string parameterName;
    cout << "Digite o Nome do Parâmetro: ";
    cin >> parameterName;
    string parameterType;
    cout << "Digite o Tipo da Variável do Parâmetro: ";
    cin >> parameterType;
    cout << "Digite o Nome da Variável que armazenará o valor da Propriedade: ";
    string variableName;
    cin >> variableName;
    return "Public Property Let " + propertyName + 
                   " (ByVal " + parameterName + " As " + parameterType +")\n" +
                   variableName + " = " + parameterName + "\n" +
                   "End Property\n";      
}

std::string getGetProperty(){
     /*Get the Get Statement
     * To be used in Class Modules in VBA
     * Equivalent to Getters
     */
    cout << "Digite o Nome da Propriedade: ";
    string propertyName;
    cin >> propertyName;
    cout << "Digite o Nome da Variável: ";
    string variableName;
    cin >> variableName;
    string returnType;
    cout << "Digite o Tipo do Retorno: ";
    cin >> returnType;
    return "Public Property Get " + propertyName + "() As " + returnType +"\n" +
                   propertyName + " = " + variableName + "\n" +
                   "End Property\n";      
}
/*
bool sendToClipBoard(const std::string &s){
     OpenClipboard(0);
	 EmptyClipboard();	
	 HGLOBAL hg=GlobalAlloc(GMEM_MOVEABLE,s.size());
	 if (!hg){
        CloseClipboard();
		return false;
	 }
	 memcpy(GlobalLock(hg),s.c_str(),s.size());
	 GlobalUnlock(hg);
	 SetClipboardData(CF_TEXT,hg);
	 CloseClipboard();
	 GlobalFree(hg);
     return true;     
}*/

