/*
 * func-name: ??0CMultiLineEB@@QAE@ABV0@@Z
 * func-address: 0x10073260
 * callers: 0x10074470
 * callees: 0x1000d900, 0x1006e430, 0x10072db0
 */

CMultiLineEB *__thiscall CMultiLineEB::CMultiLineEB(CMultiLineEB *this, const struct CMultiLineEB *a2)
{
  CREEditBox::CREEditBox(this, a2);
  *(_DWORD *)this = &CMultiLineEB::`vftable';
  *((_DWORD *)this + 198) = *((_DWORD *)a2 + 198);
  *((_DWORD *)this + 199) = *((_DWORD *)a2 + 199);
  *((_DWORD *)this + 200) = *((_DWORD *)a2 + 200);
  *((_DWORD *)this + 201) = *((_DWORD *)a2 + 201);
  *((_DWORD *)this + 202) = *((_DWORD *)a2 + 202);
  *((_DWORD *)this + 203) = *((_DWORD *)a2 + 203);
  *((_DWORD *)this + 204) = *((_DWORD *)a2 + 204);
  *((_DWORD *)this + 205) = *((_DWORD *)a2 + 205);
  *((_DWORD *)this + 206) = *((_DWORD *)a2 + 206);
  *((_DWORD *)this + 207) = *((_DWORD *)a2 + 207);
  *((_DWORD *)this + 208) = *((_DWORD *)a2 + 208);
  *((_DWORD *)this + 209) = *((_DWORD *)a2 + 209);
  *((_DWORD *)this + 210) = *((_DWORD *)a2 + 210);
  *((_DWORD *)this + 211) = *((_DWORD *)a2 + 211);
  *((_DWORD *)this + 212) = *((_DWORD *)a2 + 212);
  *((_DWORD *)this + 213) = *((_DWORD *)a2 + 213);
  *((_BYTE *)this + 856) = *((_BYTE *)a2 + 856);
  sub_1000D900((_DWORD *)this + 215, (int)a2 + 860);
  sub_1000D900((_DWORD *)this + 219, (int)a2 + 876);
  sub_1006E430((_DWORD *)this + 223, (int)a2 + 892);
  return this;
}
