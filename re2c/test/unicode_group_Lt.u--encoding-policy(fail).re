#include <stdio.h>
#define YYCTYPE unsigned int
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Lt:
	/*!re2c
		re2c:yyfill:enable = 0;
		Lt = [\u01c5-\u01c5\u01c8-\u01c8\u01cb-\u01cb\u01f2-\u01f2\u1f88-\u1f8f\u1f98-\u1f9f\u1fa8-\u1faf\u1fbc-\u1fbc\u1fcc-\u1fcc\u1ffc-\u1ffc];
		Lt { goto Lt; }
		[^] { return YYCURSOR == limit; }
	*/
}
static const char buffer_Lt [] = "\xC5\x01\x00\x00\xC8\x01\x00\x00\xCB\x01\x00\x00\xF2\x01\x00\x00\x88\x1F\x00\x00\x89\x1F\x00\x00\x8A\x1F\x00\x00\x8B\x1F\x00\x00\x8C\x1F\x00\x00\x8D\x1F\x00\x00\x8E\x1F\x00\x00\x8F\x1F\x00\x00\x98\x1F\x00\x00\x99\x1F\x00\x00\x9A\x1F\x00\x00\x9B\x1F\x00\x00\x9C\x1F\x00\x00\x9D\x1F\x00\x00\x9E\x1F\x00\x00\x9F\x1F\x00\x00\xA8\x1F\x00\x00\xA9\x1F\x00\x00\xAA\x1F\x00\x00\xAB\x1F\x00\x00\xAC\x1F\x00\x00\xAD\x1F\x00\x00\xAE\x1F\x00\x00\xAF\x1F\x00\x00\xBC\x1F\x00\x00\xCC\x1F\x00\x00\xFC\x1F\x00\x00\x00\x00\x00\x00";
int main ()
{
	if (!scan (reinterpret_cast<const YYCTYPE *> (buffer_Lt), reinterpret_cast<const YYCTYPE *> (buffer_Lt + sizeof (buffer_Lt) - 1)))
		printf("test 'Lt' failed\n");
}