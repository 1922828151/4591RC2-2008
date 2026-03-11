/*
 * func-name: ??0CPasswordEB@@QAE@ABV0@@Z
 * func-address: 0x10073f50
 * callers: none
 * callees: 0x10072db0
 */

CPasswordEB *__thiscall CPasswordEB::CPasswordEB(CPasswordEB *this, const struct CPasswordEB *a2)
{
  CREEditBox::CREEditBox(this, a2);
  *(_DWORD *)this = &CPasswordEB::`vftable';
  *((_DWORD *)this + 198) = *((_DWORD *)a2 + 198);
  *((_DWORD *)this + 199) = *((_DWORD *)a2 + 199);
  *((_DWORD *)this + 200) = *((_DWORD *)a2 + 200);
  *((_DWORD *)this + 201) = *((_DWORD *)a2 + 201);
  *((_DWORD *)this + 202) = *((_DWORD *)a2 + 202);
  *((_DWORD *)this + 203) = *((_DWORD *)a2 + 203);
  *((_BYTE *)this + 816) = *((_BYTE *)a2 + 816);
  return this;
}
