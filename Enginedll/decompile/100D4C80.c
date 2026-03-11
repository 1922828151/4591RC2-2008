/*
 * func-name: ??0CProgressBTN@@QAE@ABV0@@Z
 * func-address: 0x100d4c80
 * callers: none
 * callees: 0x10071950
 */

CProgressBTN *__thiscall CProgressBTN::CProgressBTN(CProgressBTN *this, const struct CProgressBTN *a2)
{
  CREButton::CREButton(this, a2);
  *(_DWORD *)this = &CProgressBTN::`vftable';
  *((_DWORD *)this + 204) = *((_DWORD *)a2 + 204);
  *((float *)this + 205) = *((float *)a2 + 205);
  *((float *)this + 206) = *((float *)a2 + 206);
  *((float *)this + 207) = *((float *)a2 + 207);
  *((_DWORD *)this + 208) = *((_DWORD *)a2 + 208);
  *((_DWORD *)this + 209) = *((_DWORD *)a2 + 209);
  *((_DWORD *)this + 210) = *((_DWORD *)a2 + 210);
  *((_DWORD *)this + 211) = *((_DWORD *)a2 + 211);
  return this;
}
