/* Generated by re2c */
#line 1 "unicode_group_Lt.x--encoding-policy(substitute).re"
#include <stdio.h>
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Lt:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0x1F9F) {
		if (yych <= 0x01CB) {
			if (yych <= 0x01C7) {
				if (yych == 0x01C5) goto yy3;
				goto yy5;
			} else {
				if (yych <= 0x01C8) goto yy3;
				if (yych <= 0x01CA) goto yy5;
				goto yy3;
			}
		} else {
			if (yych <= 0x1F87) {
				if (yych == 0x01F2) goto yy3;
				goto yy5;
			} else {
				if (yych <= 0x1F8F) goto yy3;
				if (yych <= 0x1F97) goto yy5;
				goto yy3;
			}
		}
	} else {
		if (yych <= 0x1FCC) {
			if (yych <= 0x1FBB) {
				if (yych <= 0x1FA7) goto yy5;
				if (yych <= 0x1FAF) goto yy3;
				goto yy5;
			} else {
				if (yych <= 0x1FBC) goto yy3;
				if (yych <= 0x1FCB) goto yy5;
				goto yy3;
			}
		} else {
			if (yych <= 0xD7FF) {
				if (yych == 0x1FFC) goto yy3;
				goto yy5;
			} else {
				if (yych <= 0xDBFF) goto yy7;
				if (yych >= 0xE000) goto yy5;
			}
		}
	}
yy2:
yy3:
	++YYCURSOR;
#line 11 "unicode_group_Lt.x--encoding-policy(substitute).re"
	{ goto Lt; }
#line 63 "<stdout>"
yy5:
	++YYCURSOR;
#line 12 "unicode_group_Lt.x--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 68 "<stdout>"
yy7:
	++YYCURSOR;
	if ((yych = *YYCURSOR) <= 0xDBFF) goto yy2;
	if (yych <= 0xDFFF) goto yy5;
	goto yy2;
}
#line 13 "unicode_group_Lt.x--encoding-policy(substitute).re"

}
static const char buffer_Lt [] = "\xC5\x01\xC8\x01\xCB\x01\xF2\x01\x88\x1F\x89\x1F\x8A\x1F\x8B\x1F\x8C\x1F\x8D\x1F\x8E\x1F\x8F\x1F\x98\x1F\x99\x1F\x9A\x1F\x9B\x1F\x9C\x1F\x9D\x1F\x9E\x1F\x9F\x1F\xA8\x1F\xA9\x1F\xAA\x1F\xAB\x1F\xAC\x1F\xAD\x1F\xAE\x1F\xAF\x1F\xBC\x1F\xCC\x1F\xFC\x1F\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Lt), reinterpret_cast<const YYCTYPE *> (buffer_Lt + sizeof (buffer_Lt) - 1)))
		printf("test 'Lt' failed\n");
}