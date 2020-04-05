#ifndef COMMONDEFS_H_
#include "CommonDefs.h"
#endif

#include <sstream>

using namespace std;

// string toString(int a)
// {
// 	ostringstream os;
// 	os << a;
// 	return os.str();
// }

// string toHexString(int a)
// {
// 	ostringstream os;
// 	os << "0x" << hex << a << dec;
// 	return os.str();
// }

// string toHexStringTwoDigits(int a)
// {
// 	ostringstream os;
// 	if( a <= 0xF )
// 	{
// 		os << "0x0";
// 	}
// 	else
// 	{
// 		os << "0x";
// 	}
// 	os << hex << a << dec;
// 	return os.str();
// }

// string toString(unsigned int a)
// {
// 	ostringstream os;
// 	os << a;
// 	return os.str();
// }

// string toString(double d)
// {
// 	ostringstream os;
// 	os << std::setprecision(17) << d;
// 	return os.str();
// }

// string toString(const string& str)
// {
// 	return str;
// }
// string toStringInt2Bin(const int& iDec, int bits)
// {
// 	string binary("");
// 	int mask = 1;
// 	for (int i = 0; i < bits; i++)
// 	{
// 		if((mask & iDec) >= 1) binary = " 1" + binary;
// 		else binary = " 0" + binary;
// 		mask<<=1;
// 	}
// 	return binary;
// }
// double toDouble(const string& str)
// {
// #if 1
// 	double value;
// 	istringstream is(str);
// 	is >> value;
// 	return value;
// #else
// 	return lexical_cast<double>(str);
// #endif
// }

// int toInt(const string& str)
// {
// #if 1
// 	int value;
// 	istringstream is(str);
// 	is >> value;
// 	return value;
// #else
// 	return lexical_cast<int>(str);
// #endif
// }

// long toLong(const string& str)
// {
// #if 1
// 	long value;
// 	istringstream is(str);
// 	is >> value;
// 	return value;
// #else
// 	return lexical_cast<long>(str);
// #endif
// }

// unsigned int toUnsignedInt(const string& str)
// {
// #if 1
// 	unsigned int value;
// 	istringstream is(str);
// 	is >> value;
// 	return value;
// #else
// 	return lexical_cast<unsigned int>(str);
// #endif
// }

// // Given the data of positive pin of a differential pair, return data of negative pin
// unsigned int getNegData(unsigned int data, unsigned int bitLength)
// {
// 	THROW_ON_FALSE(bitLength <= 32, string("Specified bit length '") + toString(bitLength) + "' should be <= 32" );
// 	unsigned int neg = (~data) & ( ~(0xffffffff << bitLength) );

// 	return neg;
// }


UserException::UserException(const string& msg) : runtime_error(msg)
{
}

// int _bitMask[32] =
// {
// 		1,3,7,15,31,63,127,255,
// 		511,1023,2047,4095,8191,16383,32767,65535,
// 		131071,262143,524287,1048575,2097151,4194303,8388607,16777215,
// 		33554431,67108863,134217727,268435455,536870911,1073741823,2147483647,
// 		-1
// };
