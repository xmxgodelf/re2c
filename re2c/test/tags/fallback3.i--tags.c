/* Generated by re2c */
// This example shows the need of backuping tags in fallback
// states: if the rule is self-overlapping and the overlapping
// part has tags, these tags might be overwritten by an unsuccessful
// attempt to match longer input.


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	long yyt0p;
	long yyt0p_;
	YYCTXMARKER = YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{}
yy4:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy5;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'c':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy3;
	} else {
		yyt0p = yyt0p_;
		goto yy8;
	}
yy7:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt0p_ = yyt0p;
		goto yy9;
	default:	goto yy8;
	}
yy8:
	{ (YYCTXMARKER + yyt0p) }
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':
		yyt0p = (YYCURSOR - YYCTXMARKER);
		goto yy5;
	default:	goto yy6;
	}
}
