/* Generated by re2c */
#line 1 "unicode_group_Zl.x--encoding-policy(fail).re"
#include <stdio.h>
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Zl:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0xD7FF) {
		if (yych == 0x2028) goto yy3;
		goto yy5;
	} else {
		if (yych <= 0xDBFF) goto yy7;
		if (yych >= 0xE000) goto yy5;
	}
yy2:
yy3:
	++YYCURSOR;
#line 11 "unicode_group_Zl.x--encoding-policy(fail).re"
	{ goto Zl; }
#line 29 "<stdout>"
yy5:
	++YYCURSOR;
#line 12 "unicode_group_Zl.x--encoding-policy(fail).re"
	{ return YYCURSOR == limit; }
#line 34 "<stdout>"
yy7:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy2;
	if (yych <= 0xDFFF) goto yy5;
	goto yy2;
}
#line 13 "unicode_group_Zl.x--encoding-policy(fail).re"

}
static const char buffer_Zl [] = "\x28\x20\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Zl), reinterpret_cast<const YYCTYPE *> (buffer_Zl + sizeof (buffer_Zl) - 1)))
		printf("test 'Zl' failed\n");
}