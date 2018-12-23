/* Generated by re2c */
#include <ctype.h>
#include <stdio.h>

template<typename char_t>
struct input_t {
    size_t len;
    char_t *str;

    input_t(FILE *f) : len(0), str(NULL)
    {
        fseek(f, 0, SEEK_END);
        len = ftell(f) / sizeof(char_t);
        fseek(f, 0, SEEK_SET);
        str = new char_t[len + 1];
        fread(str, sizeof(char_t), len, f);
        str[len] = 0;
    }
    ~input_t()
    {
        delete[]str;
    }
};

typedef input_t<unsigned char>  iutf8_t;
typedef input_t<unsigned short> iutf16_t;
typedef input_t<unsigned int>   iutf32_t;
typedef input_t<unsigned short> iucs2_t;

struct out_t {
    bool caps;

    out_t() : caps(false) {}
    void prt(char c)
    {
        printf("%c", caps ? toupper(c) : c);
        caps = false;
    }
    void err()
    {
        printf(" ... error\n");
    }
};



enum YYCONDTYPE {
	yycl,
	yycn,
};


static void lex_utf8(const iutf8_t & in)
{
    const unsigned char *YYCURSOR = in.str;
    const unsigned char *YYMARKER;
    int c = yycl;
    out_t out;
    
{
	unsigned char yych;
	switch (c) {
	case yycl: goto yyc_l;
	case yycn: goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy3;
	case '\n':	goto yy7;
	case ' ':	goto yy9;
	case 0xE2:	goto yy11;
	default:	goto yy5;
	}
yy3:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy5:
	++YYCURSOR;
yy6:
	{ out.err(); return; }
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\r':	goto yy12;
	default:	goto yy8;
	}
yy8:
	{ out.prt('\n'); goto yyc_l; }
yy9:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy11:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy13;
	default:	goto yy6;
	}
yy12:
	++YYCURSOR;
	goto yy8;
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy9;
	case 0x81:	goto yy15;
	case 0x82:	goto yy17;
	case 0x83:	goto yy19;
	case 0x84:	goto yy21;
	case 0x85:	goto yy23;
	case 0x86:	goto yy25;
	case 0x87:	goto yy27;
	case 0x89:	goto yy29;
	case 0x8A:	goto yy31;
	case 0x8B:	goto yy33;
	case 0x8D:	goto yy35;
	case 0x8E:	goto yy37;
	case 0x8F:	goto yy39;
	case 0x91:	goto yy41;
	case 0x92:	goto yy43;
	case 0x93:	goto yy45;
	case 0x94:	goto yy47;
	case 0x95:	goto yy49;
	case 0x96:	goto yy51;
	case 0x97:	goto yy53;
	case 0x99:	goto yy55;
	case 0x9A:	goto yy57;
	case 0x9B:	goto yy59;
	case 0x9D:	goto yy61;
	case 0x9E:	goto yy63;
	case 0x9F:	goto yy65;
	case 0xA0:	goto yy67;
	case 0xA4:	goto yy69;
	case 0xA5:	goto yy71;
	case 0xA6:	goto yy73;
	case 0xA7:	goto yy75;
	case 0xAD:	goto yy77;
	case 0xB0:	goto yy79;
	case 0xB2:	goto yy81;
	case 0xB5:	goto yy83;
	case 0xBA:	goto yy85;
	case 0xBC:	goto yy87;
	case 0xBD:	goto yy89;
	default:	goto yy14;
	}
yy14:
	YYCURSOR = YYMARKER;
	goto yy6;
yy15:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy17:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy19:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy21:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy23:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy25:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy27:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy29:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy31:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy33:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy35:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy37:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy39:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy41:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy43:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy45:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy47:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy49:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy51:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy53:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy55:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy57:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy59:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy61:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy63:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy65:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy67:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy69:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy71:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy73:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy75:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy77:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy79:
	++YYCURSOR;
	goto yyc_l;
yy81:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy83:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy85:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy87:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy89:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy93;
	case '\n':	goto yy97;
	case ' ':	goto yy99;
	case 0xE2:	goto yy101;
	default:	goto yy95;
	}
yy93:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy95:
	++YYCURSOR;
yy96:
	{ out.err(); return; }
yy97:
	yych = *++YYCURSOR;
	switch (yych) {
	case '\r':	goto yy102;
	default:	goto yy98;
	}
yy98:
	{ out.prt('\n'); goto yyc_l; }
yy99:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy101:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 0xA0:	goto yy103;
	default:	goto yy96;
	}
yy102:
	++YYCURSOR;
	goto yy98;
yy103:
	yych = *++YYCURSOR;
	switch (yych) {
	case 0x80:	goto yy99;
	case 0x81:	goto yy105;
	case 0x82:	goto yy107;
	case 0x83:	goto yy109;
	case 0x84:	goto yy111;
	case 0x86:	goto yy113;
	case 0x89:	goto yy115;
	case 0x8A:	goto yy117;
	case 0x8B:	goto yy119;
	case 0x91:	goto yy121;
	case 0x92:	goto yy123;
	case 0x93:	goto yy125;
	case 0x94:	goto yy127;
	case 0x96:	goto yy129;
	case 0x99:	goto yy131;
	case 0x9A:	goto yy133;
	case 0x9B:	goto yy135;
	case 0xA0:	goto yy137;
	case 0xA4:	goto yy139;
	case 0xA6:	goto yy141;
	case 0xB0:	goto yy143;
	case 0xB2:	goto yy145;
	case 0xBC:	goto yy147;
	default:	goto yy104;
	}
yy104:
	YYCURSOR = YYMARKER;
	goto yy96;
yy105:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy107:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy109:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy111:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy113:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy115:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy117:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy119:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy121:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy123:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy125:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy127:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy129:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy131:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy133:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy135:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy137:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy139:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy141:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy143:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy145:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy147:
	++YYCURSOR;
	goto yyc_n;
}

}

static void lex_utf16(const iutf16_t & in)
{
    const unsigned short *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x2816) {
		if (yych <= 0x2807) {
			if (yych <= 0x2800) {
				if (yych <= '\n') {
					if (yych <= 0x0000) goto yy3;
					if (yych <= '\t') goto yy5;
					goto yy7;
				} else {
					if (yych == ' ') goto yy9;
					if (yych <= 0x27FF) goto yy5;
					goto yy9;
				}
			} else {
				if (yych <= 0x2803) {
					if (yych <= 0x2801) goto yy11;
					if (yych <= 0x2802) goto yy13;
					goto yy15;
				} else {
					if (yych <= 0x2804) goto yy17;
					if (yych <= 0x2805) goto yy19;
					if (yych <= 0x2806) goto yy21;
					goto yy23;
				}
			}
		} else {
			if (yych <= 0x280E) {
				if (yych <= 0x280A) {
					if (yych <= 0x2808) goto yy5;
					if (yych <= 0x2809) goto yy25;
					goto yy27;
				} else {
					if (yych <= 0x280B) goto yy29;
					if (yych <= 0x280C) goto yy5;
					if (yych <= 0x280D) goto yy31;
					goto yy33;
				}
			} else {
				if (yych <= 0x2812) {
					if (yych <= 0x280F) goto yy35;
					if (yych <= 0x2810) goto yy5;
					if (yych <= 0x2811) goto yy37;
					goto yy39;
				} else {
					if (yych <= 0x2813) goto yy41;
					if (yych <= 0x2814) goto yy43;
					if (yych <= 0x2815) goto yy45;
					goto yy47;
				}
			}
		}
	} else {
		if (yych <= 0x2826) {
			if (yych <= 0x281D) {
				if (yych <= 0x2819) {
					if (yych <= 0x2817) goto yy49;
					if (yych <= 0x2818) goto yy5;
					goto yy51;
				} else {
					if (yych <= 0x281A) goto yy53;
					if (yych <= 0x281B) goto yy55;
					if (yych <= 0x281C) goto yy5;
					goto yy57;
				}
			} else {
				if (yych <= 0x2820) {
					if (yych <= 0x281E) goto yy59;
					if (yych <= 0x281F) goto yy61;
					goto yy63;
				} else {
					if (yych <= 0x2823) goto yy5;
					if (yych <= 0x2824) goto yy65;
					if (yych <= 0x2825) goto yy67;
					goto yy69;
				}
			}
		} else {
			if (yych <= 0x2832) {
				if (yych <= 0x282D) {
					if (yych <= 0x2827) goto yy71;
					if (yych <= 0x282C) goto yy5;
					goto yy73;
				} else {
					if (yych == 0x2830) goto yy75;
					if (yych <= 0x2831) goto yy5;
					goto yy77;
				}
			} else {
				if (yych <= 0x283A) {
					if (yych == 0x2835) goto yy79;
					if (yych <= 0x2839) goto yy5;
					goto yy81;
				} else {
					if (yych <= 0x283B) goto yy5;
					if (yych <= 0x283C) goto yy83;
					if (yych <= 0x283D) goto yy85;
					goto yy5;
				}
			}
		}
	}
yy3:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy5:
	++YYCURSOR;
	{ out.err(); return; }
yy7:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy87;
yy8:
	{ out.prt('\n'); goto yyc_l; }
yy9:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy11:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy13:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy15:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy17:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy19:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy21:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy23:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy25:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy27:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy29:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy31:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy33:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy35:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy37:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy39:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy41:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy43:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy45:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy47:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy49:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy51:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy53:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy55:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy57:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy59:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy61:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy63:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy65:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy67:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy69:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy71:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy73:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy75:
	++YYCURSOR;
	goto yyc_l;
yy77:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy79:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy81:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy83:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy85:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy87:
	++YYCURSOR;
	goto yy8;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x2812) {
		if (yych <= 0x2803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x0001) goto yy92;
				} else {
					if (yych <= '\n') goto yy94;
					if (yych <= 0x001F) goto yy92;
					goto yy96;
				}
			} else {
				if (yych <= 0x2800) {
					if (yych <= 0x27FF) goto yy92;
					goto yy96;
				} else {
					if (yych <= 0x2801) goto yy98;
					if (yych <= 0x2802) goto yy100;
					goto yy102;
				}
			}
		} else {
			if (yych <= 0x2809) {
				if (yych <= 0x2805) {
					if (yych <= 0x2804) goto yy104;
					goto yy92;
				} else {
					if (yych <= 0x2806) goto yy106;
					if (yych <= 0x2808) goto yy92;
					goto yy108;
				}
			} else {
				if (yych <= 0x280B) {
					if (yych <= 0x280A) goto yy110;
					goto yy112;
				} else {
					if (yych <= 0x2810) goto yy92;
					if (yych <= 0x2811) goto yy114;
					goto yy116;
				}
			}
		}
	} else {
		if (yych <= 0x2820) {
			if (yych <= 0x2818) {
				if (yych <= 0x2814) {
					if (yych <= 0x2813) goto yy118;
					goto yy120;
				} else {
					if (yych == 0x2816) goto yy122;
					goto yy92;
				}
			} else {
				if (yych <= 0x281A) {
					if (yych <= 0x2819) goto yy124;
					goto yy126;
				} else {
					if (yych <= 0x281B) goto yy128;
					if (yych <= 0x281F) goto yy92;
					goto yy130;
				}
			}
		} else {
			if (yych <= 0x282F) {
				if (yych <= 0x2824) {
					if (yych <= 0x2823) goto yy92;
					goto yy132;
				} else {
					if (yych == 0x2826) goto yy134;
					goto yy92;
				}
			} else {
				if (yych <= 0x2832) {
					if (yych <= 0x2830) goto yy136;
					if (yych <= 0x2831) goto yy92;
					goto yy138;
				} else {
					if (yych == 0x283C) goto yy140;
					goto yy92;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy92:
	++YYCURSOR;
	{ out.err(); return; }
yy94:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy142;
yy95:
	{ out.prt('\n'); goto yyc_l; }
yy96:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy98:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy100:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy102:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy104:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy106:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy108:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy110:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy112:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy114:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy116:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy118:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy120:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy122:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy124:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy126:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy128:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy130:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy132:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy134:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy136:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy138:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy140:
	++YYCURSOR;
	goto yyc_n;
yy142:
	++YYCURSOR;
	goto yy95;
}

}

static void lex_utf32(const iutf32_t & in)
{
    const unsigned int *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x00002816) {
		if (yych <= 0x00002807) {
			if (yych <= 0x00002800) {
				if (yych <= '\n') {
					if (yych <= 0x00000000) goto yy3;
					if (yych <= '\t') goto yy5;
					goto yy7;
				} else {
					if (yych == ' ') goto yy9;
					if (yych <= 0x000027FF) goto yy5;
					goto yy9;
				}
			} else {
				if (yych <= 0x00002803) {
					if (yych <= 0x00002801) goto yy11;
					if (yych <= 0x00002802) goto yy13;
					goto yy15;
				} else {
					if (yych <= 0x00002804) goto yy17;
					if (yych <= 0x00002805) goto yy19;
					if (yych <= 0x00002806) goto yy21;
					goto yy23;
				}
			}
		} else {
			if (yych <= 0x0000280E) {
				if (yych <= 0x0000280A) {
					if (yych <= 0x00002808) goto yy5;
					if (yych <= 0x00002809) goto yy25;
					goto yy27;
				} else {
					if (yych <= 0x0000280B) goto yy29;
					if (yych <= 0x0000280C) goto yy5;
					if (yych <= 0x0000280D) goto yy31;
					goto yy33;
				}
			} else {
				if (yych <= 0x00002812) {
					if (yych <= 0x0000280F) goto yy35;
					if (yych <= 0x00002810) goto yy5;
					if (yych <= 0x00002811) goto yy37;
					goto yy39;
				} else {
					if (yych <= 0x00002813) goto yy41;
					if (yych <= 0x00002814) goto yy43;
					if (yych <= 0x00002815) goto yy45;
					goto yy47;
				}
			}
		}
	} else {
		if (yych <= 0x00002826) {
			if (yych <= 0x0000281D) {
				if (yych <= 0x00002819) {
					if (yych <= 0x00002817) goto yy49;
					if (yych <= 0x00002818) goto yy5;
					goto yy51;
				} else {
					if (yych <= 0x0000281A) goto yy53;
					if (yych <= 0x0000281B) goto yy55;
					if (yych <= 0x0000281C) goto yy5;
					goto yy57;
				}
			} else {
				if (yych <= 0x00002820) {
					if (yych <= 0x0000281E) goto yy59;
					if (yych <= 0x0000281F) goto yy61;
					goto yy63;
				} else {
					if (yych <= 0x00002823) goto yy5;
					if (yych <= 0x00002824) goto yy65;
					if (yych <= 0x00002825) goto yy67;
					goto yy69;
				}
			}
		} else {
			if (yych <= 0x00002832) {
				if (yych <= 0x0000282D) {
					if (yych <= 0x00002827) goto yy71;
					if (yych <= 0x0000282C) goto yy5;
					goto yy73;
				} else {
					if (yych == 0x00002830) goto yy75;
					if (yych <= 0x00002831) goto yy5;
					goto yy77;
				}
			} else {
				if (yych <= 0x0000283A) {
					if (yych == 0x00002835) goto yy79;
					if (yych <= 0x00002839) goto yy5;
					goto yy81;
				} else {
					if (yych <= 0x0000283B) goto yy5;
					if (yych <= 0x0000283C) goto yy83;
					if (yych <= 0x0000283D) goto yy85;
					goto yy5;
				}
			}
		}
	}
yy3:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy5:
	++YYCURSOR;
	{ out.err(); return; }
yy7:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy87;
yy8:
	{ out.prt('\n'); goto yyc_l; }
yy9:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy11:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy13:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy15:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy17:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy19:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy21:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy23:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy25:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy27:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy29:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy31:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy33:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy35:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy37:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy39:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy41:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy43:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy45:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy47:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy49:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy51:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy53:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy55:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy57:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy59:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy61:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy63:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy65:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy67:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy69:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy71:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy73:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy75:
	++YYCURSOR;
	goto yyc_l;
yy77:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy79:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy81:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy83:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy85:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy87:
	++YYCURSOR;
	goto yy8;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x00002812) {
		if (yych <= 0x00002803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x00000001) goto yy92;
				} else {
					if (yych <= '\n') goto yy94;
					if (yych <= 0x0000001F) goto yy92;
					goto yy96;
				}
			} else {
				if (yych <= 0x00002800) {
					if (yych <= 0x000027FF) goto yy92;
					goto yy96;
				} else {
					if (yych <= 0x00002801) goto yy98;
					if (yych <= 0x00002802) goto yy100;
					goto yy102;
				}
			}
		} else {
			if (yych <= 0x00002809) {
				if (yych <= 0x00002805) {
					if (yych <= 0x00002804) goto yy104;
					goto yy92;
				} else {
					if (yych <= 0x00002806) goto yy106;
					if (yych <= 0x00002808) goto yy92;
					goto yy108;
				}
			} else {
				if (yych <= 0x0000280B) {
					if (yych <= 0x0000280A) goto yy110;
					goto yy112;
				} else {
					if (yych <= 0x00002810) goto yy92;
					if (yych <= 0x00002811) goto yy114;
					goto yy116;
				}
			}
		}
	} else {
		if (yych <= 0x00002820) {
			if (yych <= 0x00002818) {
				if (yych <= 0x00002814) {
					if (yych <= 0x00002813) goto yy118;
					goto yy120;
				} else {
					if (yych == 0x00002816) goto yy122;
					goto yy92;
				}
			} else {
				if (yych <= 0x0000281A) {
					if (yych <= 0x00002819) goto yy124;
					goto yy126;
				} else {
					if (yych <= 0x0000281B) goto yy128;
					if (yych <= 0x0000281F) goto yy92;
					goto yy130;
				}
			}
		} else {
			if (yych <= 0x0000282F) {
				if (yych <= 0x00002824) {
					if (yych <= 0x00002823) goto yy92;
					goto yy132;
				} else {
					if (yych == 0x00002826) goto yy134;
					goto yy92;
				}
			} else {
				if (yych <= 0x00002832) {
					if (yych <= 0x00002830) goto yy136;
					if (yych <= 0x00002831) goto yy92;
					goto yy138;
				} else {
					if (yych == 0x0000283C) goto yy140;
					goto yy92;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy92:
	++YYCURSOR;
	{ out.err(); return; }
yy94:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy142;
yy95:
	{ out.prt('\n'); goto yyc_l; }
yy96:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy98:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy100:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy102:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy104:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy106:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy108:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy110:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy112:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy114:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy116:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy118:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy120:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy122:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy124:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy126:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy128:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy130:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy132:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy134:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy136:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy138:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy140:
	++YYCURSOR;
	goto yyc_n;
yy142:
	++YYCURSOR;
	goto yy95;
}

}

static void lex_ucs2(const iucs2_t & in)
{
    const unsigned short *YYCURSOR = in.str;
    int c = yycl;
    out_t out;
    
{
	unsigned int yych;
	if (c < 1) {
		goto yyc_l;
	} else {
		goto yyc_n;
	}
/* *********************************** */
yyc_l:
	yych = *YYCURSOR;
	if (yych <= 0x2816) {
		if (yych <= 0x2807) {
			if (yych <= 0x2800) {
				if (yych <= '\n') {
					if (yych <= 0x0000) goto yy3;
					if (yych <= '\t') goto yy5;
					goto yy7;
				} else {
					if (yych == ' ') goto yy9;
					if (yych <= 0x27FF) goto yy5;
					goto yy9;
				}
			} else {
				if (yych <= 0x2803) {
					if (yych <= 0x2801) goto yy11;
					if (yych <= 0x2802) goto yy13;
					goto yy15;
				} else {
					if (yych <= 0x2804) goto yy17;
					if (yych <= 0x2805) goto yy19;
					if (yych <= 0x2806) goto yy21;
					goto yy23;
				}
			}
		} else {
			if (yych <= 0x280E) {
				if (yych <= 0x280A) {
					if (yych <= 0x2808) goto yy5;
					if (yych <= 0x2809) goto yy25;
					goto yy27;
				} else {
					if (yych <= 0x280B) goto yy29;
					if (yych <= 0x280C) goto yy5;
					if (yych <= 0x280D) goto yy31;
					goto yy33;
				}
			} else {
				if (yych <= 0x2812) {
					if (yych <= 0x280F) goto yy35;
					if (yych <= 0x2810) goto yy5;
					if (yych <= 0x2811) goto yy37;
					goto yy39;
				} else {
					if (yych <= 0x2813) goto yy41;
					if (yych <= 0x2814) goto yy43;
					if (yych <= 0x2815) goto yy45;
					goto yy47;
				}
			}
		}
	} else {
		if (yych <= 0x2826) {
			if (yych <= 0x281D) {
				if (yych <= 0x2819) {
					if (yych <= 0x2817) goto yy49;
					if (yych <= 0x2818) goto yy5;
					goto yy51;
				} else {
					if (yych <= 0x281A) goto yy53;
					if (yych <= 0x281B) goto yy55;
					if (yych <= 0x281C) goto yy5;
					goto yy57;
				}
			} else {
				if (yych <= 0x2820) {
					if (yych <= 0x281E) goto yy59;
					if (yych <= 0x281F) goto yy61;
					goto yy63;
				} else {
					if (yych <= 0x2823) goto yy5;
					if (yych <= 0x2824) goto yy65;
					if (yych <= 0x2825) goto yy67;
					goto yy69;
				}
			}
		} else {
			if (yych <= 0x2832) {
				if (yych <= 0x282D) {
					if (yych <= 0x2827) goto yy71;
					if (yych <= 0x282C) goto yy5;
					goto yy73;
				} else {
					if (yych == 0x2830) goto yy75;
					if (yych <= 0x2831) goto yy5;
					goto yy77;
				}
			} else {
				if (yych <= 0x283A) {
					if (yych == 0x2835) goto yy79;
					if (yych <= 0x2839) goto yy5;
					goto yy81;
				} else {
					if (yych <= 0x283B) goto yy5;
					if (yych <= 0x283C) goto yy83;
					if (yych <= 0x283D) goto yy85;
					goto yy5;
				}
			}
		}
	}
yy3:
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy5:
	++YYCURSOR;
	{ out.err(); return; }
yy7:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy87;
yy8:
	{ out.prt('\n'); goto yyc_l; }
yy9:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy11:
	++YYCURSOR;
	{ out.prt('a'); goto yyc_l; }
yy13:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy15:
	++YYCURSOR;
	{ out.prt('b'); goto yyc_l; }
yy17:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy19:
	++YYCURSOR;
	{ out.prt('k'); goto yyc_l; }
yy21:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy23:
	++YYCURSOR;
	{ out.prt('l'); goto yyc_l; }
yy25:
	++YYCURSOR;
	{ out.prt('c'); goto yyc_l; }
yy27:
	++YYCURSOR;
	{ out.prt('i'); goto yyc_l; }
yy29:
	++YYCURSOR;
	{ out.prt('f'); goto yyc_l; }
yy31:
	++YYCURSOR;
	{ out.prt('m'); goto yyc_l; }
yy33:
	++YYCURSOR;
	{ out.prt('s'); goto yyc_l; }
yy35:
	++YYCURSOR;
	{ out.prt('p'); goto yyc_l; }
yy37:
	++YYCURSOR;
	{ out.prt('e'); goto yyc_l; }
yy39:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy41:
	++YYCURSOR;
	{ out.prt('h'); goto yyc_l; }
yy43:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy45:
	++YYCURSOR;
	{ out.prt('o'); goto yyc_l; }
yy47:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy49:
	++YYCURSOR;
	{ out.prt('r'); goto yyc_l; }
yy51:
	++YYCURSOR;
	{ out.prt('d'); goto yyc_l; }
yy53:
	++YYCURSOR;
	{ out.prt('j'); goto yyc_l; }
yy55:
	++YYCURSOR;
	{ out.prt('g'); goto yyc_l; }
yy57:
	++YYCURSOR;
	{ out.prt('n'); goto yyc_l; }
yy59:
	++YYCURSOR;
	{ out.prt('t'); goto yyc_l; }
yy61:
	++YYCURSOR;
	{ out.prt('q'); goto yyc_l; }
yy63:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy65:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy67:
	++YYCURSOR;
	{ out.prt('u'); goto yyc_l; }
yy69:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy71:
	++YYCURSOR;
	{ out.prt('v'); goto yyc_l; }
yy73:
	++YYCURSOR;
	{ out.prt('x'); goto yyc_l; }
yy75:
	++YYCURSOR;
	goto yyc_l;
yy77:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy79:
	++YYCURSOR;
	{ out.prt('z'); goto yyc_l; }
yy81:
	++YYCURSOR;
	{ out.prt('w'); goto yyc_l; }
yy83:
	++YYCURSOR;
	c = yycn;
	goto yyc_n;
yy85:
	++YYCURSOR;
	{ out.prt('y'); goto yyc_l; }
yy87:
	++YYCURSOR;
	goto yy8;
/* *********************************** */
yyc_n:
	yych = *YYCURSOR;
	if (yych <= 0x2812) {
		if (yych <= 0x2803) {
			if (yych <= ' ') {
				if (yych <= '\t') {
					if (yych >= 0x0001) goto yy92;
				} else {
					if (yych <= '\n') goto yy94;
					if (yych <= 0x001F) goto yy92;
					goto yy96;
				}
			} else {
				if (yych <= 0x2800) {
					if (yych <= 0x27FF) goto yy92;
					goto yy96;
				} else {
					if (yych <= 0x2801) goto yy98;
					if (yych <= 0x2802) goto yy100;
					goto yy102;
				}
			}
		} else {
			if (yych <= 0x2809) {
				if (yych <= 0x2805) {
					if (yych <= 0x2804) goto yy104;
					goto yy92;
				} else {
					if (yych <= 0x2806) goto yy106;
					if (yych <= 0x2808) goto yy92;
					goto yy108;
				}
			} else {
				if (yych <= 0x280B) {
					if (yych <= 0x280A) goto yy110;
					goto yy112;
				} else {
					if (yych <= 0x2810) goto yy92;
					if (yych <= 0x2811) goto yy114;
					goto yy116;
				}
			}
		}
	} else {
		if (yych <= 0x2820) {
			if (yych <= 0x2818) {
				if (yych <= 0x2814) {
					if (yych <= 0x2813) goto yy118;
					goto yy120;
				} else {
					if (yych == 0x2816) goto yy122;
					goto yy92;
				}
			} else {
				if (yych <= 0x281A) {
					if (yych <= 0x2819) goto yy124;
					goto yy126;
				} else {
					if (yych <= 0x281B) goto yy128;
					if (yych <= 0x281F) goto yy92;
					goto yy130;
				}
			}
		} else {
			if (yych <= 0x282F) {
				if (yych <= 0x2824) {
					if (yych <= 0x2823) goto yy92;
					goto yy132;
				} else {
					if (yych == 0x2826) goto yy134;
					goto yy92;
				}
			} else {
				if (yych <= 0x2832) {
					if (yych <= 0x2830) goto yy136;
					if (yych <= 0x2831) goto yy92;
					goto yy138;
				} else {
					if (yych == 0x283C) goto yy140;
					goto yy92;
				}
			}
		}
	}
	++YYCURSOR;
	{ if (YYCURSOR != in.str + in.len + 1) out.err(); return; }
yy92:
	++YYCURSOR;
	{ out.err(); return; }
yy94:
	yych = *++YYCURSOR;
	if (yych == '\r') goto yy142;
yy95:
	{ out.prt('\n'); goto yyc_l; }
yy96:
	++YYCURSOR;
	{ out.prt(' '); goto yyc_l; }
yy98:
	++YYCURSOR;
	{ out.prt('1'); goto yyc_n; }
yy100:
	++YYCURSOR;
	{ out.prt(','); goto yyc_l; }
yy102:
	++YYCURSOR;
	{ out.prt('2'); goto yyc_n; }
yy104:
	++YYCURSOR;
	{ out.prt('\''); goto yyc_l; }
yy106:
	++YYCURSOR;
	{ out.prt(';'); goto yyc_l; }
yy108:
	++YYCURSOR;
	{ out.prt('3'); goto yyc_n; }
yy110:
	++YYCURSOR;
	{ out.prt('9'); goto yyc_n; }
yy112:
	++YYCURSOR;
	{ out.prt('6'); goto yyc_n; }
yy114:
	++YYCURSOR;
	{ out.prt('5'); goto yyc_n; }
yy116:
	++YYCURSOR;
	{ out.prt(':'); goto yyc_l; }
yy118:
	++YYCURSOR;
	{ out.prt('8'); goto yyc_n; }
yy120:
	++YYCURSOR;
	{ out.prt('*'); goto yyc_l; }
yy122:
	++YYCURSOR;
	{ out.prt('!'); goto yyc_l; }
yy124:
	++YYCURSOR;
	{ out.prt('4'); goto yyc_n; }
yy126:
	++YYCURSOR;
	{ out.prt('0'); goto yyc_n; }
yy128:
	++YYCURSOR;
	{ out.prt('7'); goto yyc_n; }
yy130:
	++YYCURSOR;
	{ out.caps = true; goto yyc_l; }
yy132:
	++YYCURSOR;
	{ out.prt('-'); goto yyc_l; }
yy134:
	++YYCURSOR;
	{ out.prt('?'); goto yyc_l; }
yy136:
	++YYCURSOR;
	c = yycl;
	goto yyc_l;
yy138:
	++YYCURSOR;
	{ out.prt('.'); goto yyc_l; }
yy140:
	++YYCURSOR;
	goto yyc_n;
yy142:
	++YYCURSOR;
	goto yy95;
}

}

int main()
{
    FILE *f;

    f = fopen("06_braille.utf8.txt", "rb");
    if (f) {
        printf("utf8:\n");
        iutf8_t in(f);
        lex_utf8(in);
        fclose(f);
    }

    f = fopen("06_braille.utf16.txt", "rb");
    if (f) {
        printf("utf16:\n");
        iutf16_t in(f);
        lex_utf16(in);
        fclose(f);
    }

    f = fopen("06_braille.utf32.txt", "rb");
    if (f) {
        printf("utf32:\n");
        iutf32_t in(f);
        lex_utf32(in);
        fclose(f);
    }

    f = fopen("06_braille.ucs2.txt", "rb");
    if (f) {
        printf("ucs2:\n");
        iucs2_t in(f);
        lex_ucs2(in);
        fclose(f);
    }

    return 0;
}