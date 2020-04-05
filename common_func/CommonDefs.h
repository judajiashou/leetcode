#ifndef COMMONDEFS_H_
#define COMMONDEFS_H_

#include <exception>
#include <iomanip>
#include <iostream>

using namespace std;

// struct AlarmResultInfo
// {
// 	bool hasAlarm;
// 	int testNumber;
// };

// const string EmptyString;
// string toString(int x);
// string toHexString(int a);
// string toHexStringTwoDigits(int a);
// string toStringInt2Bin(const int& iDec, int bits);
// string toString(unsigned int x);
// string toString(double x);
// string toString(const string& str);
// string toStringTwoDigits(int x);

// template <typename TO, typename FROM> TO to(const FROM& val){
// 	std::stringstream stream;
// 	stream << val;
// 	TO t;
// 	stream >> t;
// 	return t;
// }
// template <typename TO, typename FROM> TO toHex(const FROM& val){
// 	std::stringstream stream;
// 	stream << std::hex << val;
// 	TO t;
// 	stream >> std::hex >> t;
// 	return t;
// }

// double toDouble(const string& str);
// int toInt(const string& str);
// long toLong(const string& str);
// unsigned int toUnsignedInt(const string& str);

struct UserException : public runtime_error
{
	UserException(const string& msg);
};

// // Like assert but will throw an exception
// #define THROW_ON_FALSE(condition, msg)	\
// 	if( !(condition) )	{ throw UserException(string("Exception at ") + __FILE__ + " :" + toString(__LINE__) + "<" + #condition + ">\n\t\t\t" + msg); }
#define THROW_EXCEPTION(msg)	\
	throw UserException(string("Exception at ") + __FILE__ + " :" + toString(__LINE__) + ";" + msg);

// unsigned int getNegData(unsigned int data, unsigned int BitLength);

// #define WARNING_ON_FALSE(condition, message)	\
// 		if( !(condition) )	{	cout << "WARNING:" << __FILE__ << ":" <<  toString(__LINE__) << ":" << message  << endl; }

// #define ISSUE_WARNING(message)	\
// 		cout << "WARNING:" << __FILE__ << ":" <<  toString(__LINE__) << ":" << message  << endl;

// extern int _bitMask[32];

#endif /* COMMONDEFS_H_ */
