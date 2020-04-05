#ifndef PRINTER_HPP_
#define PRINTER_HPP_
#include <string>
#include <typeinfo>
#include "CommonDefs.h"
using namespace std;

#define print_Value(x)	__print_single(x,#x); //print single value like int double long string...
#define print_Values(x)	__print_multi(x,#x);  //print multi value like int[] double[] ...
#define print_Array(x)	__print_array(x,#x);  //print vector ARRAY_# ......

 //print single value like int double ...
 //e.g. int a;
 //	   a = ...
 //__print_single(a,"a");
  template<typename T>
  void __print_single(const T& _printOut, const string& _printName)
  {
	  cout << _printName << " = "<< _printOut << endl;
	  return;
  }

  //print multi value like int[] double[] ...
  //e.g. int a[5];
  //	 a[0] = ... a[1] = ... ...
  //__print_single(a,"a");
  template<typename T>
  void __print_multi(const T& _printOut, const string& _printName)
  {
	  if(string(typeid(_printOut).name()).find("_i") != string::npos)
	  {
		  for(unsigned int i=0;i<sizeof(_printOut)/sizeof(int);i++)
		  {
			  cout << _printName << "[" << i << "] = " << _printOut[i] << endl;
		  }
	  }
	  else if(string(typeid(_printOut).name()).find("_d") != string::npos)
	  {
		  for(unsigned int i=0;i<sizeof(_printOut)/sizeof(double);i++)
		  {
			  cout << _printName << "[" << i << "] = " << _printOut[i] << endl;
		  }
	  }
	  else if(string(typeid(_printOut).name()).find("_f") != string::npos)
	  {
		  for(unsigned int i=0;i<sizeof(_printOut)/sizeof(float);i++)
		  {
			  cout << _printName << "[" << i << "] = " << _printOut[i] << endl;
		  }
	  }
	  else if(string(typeid(_printOut).name()).find("_l") != string::npos)
	  {
		  for(unsigned int i=0;i<sizeof(_printOut)/sizeof(long);i++)
		  {
			  cout << _printName << "[" << i << "] = " << _printOut[i] << endl;
		  }
	  }
	  else
	  {
		//   THROW_EXCEPTION(string("Unexcepted parameter defination: ") + string(typeid(_printOut).name()));
		  cout << (string("Unexcepted parameter defination: ") + string(typeid(_printOut).name())) << endl;
	  }

	  return;
  }

  //print array value like array vector ...
  //e.g. vector<string> a;
  //	 a.resize(...); a .init(...); a = ...;
  //__print_single(a,"a");
  template<typename T>
  void __print_array(const T& _printOut, const string& _printName)
  {
	  for(int i=0;i<(int)_printOut.size();i++)
	  {
		  cout << _printName << "[" << i << "] = " << _printOut[i] << endl;
	  }
	  return;
  }

  inline void __printSizeOfDataType()
  {
      print_Value(sizeof(int));
      print_Value(sizeof(unsigned int));
      print_Value(sizeof(char));
      print_Value(sizeof(unsigned char));
      print_Value(sizeof(short int));
      print_Value(sizeof(unsigned short int));
      print_Value(sizeof(long int));
      print_Value(sizeof(unsigned int));
      print_Value(sizeof(float));
      print_Value(sizeof(double));
      print_Value(sizeof(long double));
      return;
  }

#endif //PRINTER_HPP_
