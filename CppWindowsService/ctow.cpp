#include "ctow.h"

LPTSTR ctow(CString s) {
	int sz = s.GetLength() + 1;
	LPTSTR w = new TCHAR[sz];
	_tcscpy_s(w, sz, s);
	return w;
}

