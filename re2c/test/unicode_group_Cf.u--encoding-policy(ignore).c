/* Generated by re2c */
#line 1 "unicode_group_Cf.u--encoding-policy(ignore).re"
#include <stdio.h>
#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Cf:
	
#line 12 "<stdout>"
{
	YYCTYPE yych;

	yych = *YYCURSOR;
	if (yych <= 0x0000205F) {
		if (yych <= 0x0000070E) {
			if (yych <= 0x000005FF) {
				if (yych != 0x000000AD) goto yy4;
			} else {
				if (yych <= 0x00000603) goto yy2;
				if (yych != 0x000006DD) goto yy4;
			}
		} else {
			if (yych <= 0x0000200A) {
				if (yych <= 0x0000070F) goto yy2;
				if (yych <= 0x000017B3) goto yy4;
				if (yych >= 0x000017B6) goto yy4;
			} else {
				if (yych <= 0x0000200F) goto yy2;
				if (yych <= 0x00002029) goto yy4;
				if (yych >= 0x0000202F) goto yy4;
			}
		}
	} else {
		if (yych <= 0x000110BC) {
			if (yych <= 0x0000FEFE) {
				if (yych <= 0x00002064) goto yy2;
				if (yych <= 0x00002069) goto yy4;
				if (yych >= 0x00002070) goto yy4;
			} else {
				if (yych <= 0x0000FEFF) goto yy2;
				if (yych <= 0x0000FFF8) goto yy4;
				if (yych >= 0x0000FFFC) goto yy4;
			}
		} else {
			if (yych <= 0x000E0000) {
				if (yych <= 0x000110BD) goto yy2;
				if (yych <= 0x0001D172) goto yy4;
				if (yych >= 0x0001D17B) goto yy4;
			} else {
				if (yych <= 0x000E0001) goto yy2;
				if (yych <= 0x000E001F) goto yy4;
				if (yych >= 0x000E0080) goto yy4;
			}
		}
	}
yy2:
	++YYCURSOR;
#line 11 "unicode_group_Cf.u--encoding-policy(ignore).re"
	{ goto Cf; }
#line 63 "<stdout>"
yy4:
	++YYCURSOR;
#line 12 "unicode_group_Cf.u--encoding-policy(ignore).re"
	{ return YYCURSOR == limit; }
#line 68 "<stdout>"
}
#line 13 "unicode_group_Cf.u--encoding-policy(ignore).re"

}
static const char buffer_Cf [] = "\xAD\x00\x00\x00\x00\x06\x00\x00\x01\x06\x00\x00\x02\x06\x00\x00\x03\x06\x00\x00\xDD\x06\x00\x00\x0F\x07\x00\x00\xB4\x17\x00\x00\xB5\x17\x00\x00\x0B\x20\x00\x00\x0C\x20\x00\x00\x0D\x20\x00\x00\x0E\x20\x00\x00\x0F\x20\x00\x00\x2A\x20\x00\x00\x2B\x20\x00\x00\x2C\x20\x00\x00\x2D\x20\x00\x00\x2E\x20\x00\x00\x60\x20\x00\x00\x61\x20\x00\x00\x62\x20\x00\x00\x63\x20\x00\x00\x64\x20\x00\x00\x6A\x20\x00\x00\x6B\x20\x00\x00\x6C\x20\x00\x00\x6D\x20\x00\x00\x6E\x20\x00\x00\x6F\x20\x00\x00\xFF\xFE\x00\x00\xF9\xFF\x00\x00\xFA\xFF\x00\x00\xFB\xFF\x00\x00\xBD\x10\x01\x00\x73\xD1\x01\x00\x74\xD1\x01\x00\x75\xD1\x01\x00\x76\xD1\x01\x00\x77\xD1\x01\x00\x78\xD1\x01\x00\x79\xD1\x01\x00\x7A\xD1\x01\x00\x01\x00\x0E\x00\x20\x00\x0E\x00\x21\x00\x0E\x00\x22\x00\x0E\x00\x23\x00\x0E\x00\x24\x00\x0E\x00\x25\x00\x0E\x00\x26\x00\x0E\x00\x27\x00\x0E\x00\x28\x00\x0E\x00\x29\x00\x0E\x00\x2A\x00\x0E\x00\x2B\x00\x0E\x00\x2C\x00\x0E\x00\x2D\x00\x0E\x00\x2E\x00\x0E\x00\x2F\x00\x0E\x00\x30\x00\x0E\x00\x31\x00\x0E\x00\x32\x00\x0E\x00\x33\x00\x0E\x00\x34\x00\x0E\x00\x35\x00\x0E\x00\x36\x00\x0E\x00\x37\x00\x0E\x00\x38\x00\x0E\x00\x39\x00\x0E\x00\x3A\x00\x0E\x00\x3B\x00\x0E\x00\x3C\x00\x0E\x00\x3D\x00\x0E\x00\x3E\x00\x0E\x00\x3F\x00\x0E\x00\x40\x00\x0E\x00\x41\x00\x0E\x00\x42\x00\x0E\x00\x43\x00\x0E\x00\x44\x00\x0E\x00\x45\x00\x0E\x00\x46\x00\x0E\x00\x47\x00\x0E\x00\x48\x00\x0E\x00\x49\x00\x0E\x00\x4A\x00\x0E\x00\x4B\x00\x0E\x00\x4C\x00\x0E\x00\x4D\x00\x0E\x00\x4E\x00\x0E\x00\x4F\x00\x0E\x00\x50\x00\x0E\x00\x51\x00\x0E\x00\x52\x00\x0E\x00\x53\x00\x0E\x00\x54\x00\x0E\x00\x55\x00\x0E\x00\x56\x00\x0E\x00\x57\x00\x0E\x00\x58\x00\x0E\x00\x59\x00\x0E\x00\x5A\x00\x0E\x00\x5B\x00\x0E\x00\x5C\x00\x0E\x00\x5D\x00\x0E\x00\x5E\x00\x0E\x00\x5F\x00\x0E\x00\x60\x00\x0E\x00\x61\x00\x0E\x00\x62\x00\x0E\x00\x63\x00\x0E\x00\x64\x00\x0E\x00\x65\x00\x0E\x00\x66\x00\x0E\x00\x67\x00\x0E\x00\x68\x00\x0E\x00\x69\x00\x0E\x00\x6A\x00\x0E\x00\x6B\x00\x0E\x00\x6C\x00\x0E\x00\x6D\x00\x0E\x00\x6E\x00\x0E\x00\x6F\x00\x0E\x00\x70\x00\x0E\x00\x71\x00\x0E\x00\x72\x00\x0E\x00\x73\x00\x0E\x00\x74\x00\x0E\x00\x75\x00\x0E\x00\x76\x00\x0E\x00\x77\x00\x0E\x00\x78\x00\x0E\x00\x79\x00\x0E\x00\x7A\x00\x0E\x00\x7B\x00\x0E\x00\x7C\x00\x0E\x00\x7D\x00\x0E\x00\x7E\x00\x0E\x00\x7F\x00\x0E\x00\x00\x00\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Cf), reinterpret_cast<const YYCTYPE *> (buffer_Cf + sizeof (buffer_Cf) - 1)))
		printf("test 'Cf' failed\n");
}