/*
 * func-name: ??0CREDialog@@QAE@ABV0@@Z
 * func-address: 0x100751a0
 * callers: 0x10075780
 * callees: 0x1000d900, 0x100710d0
 */

CREDialog *__thiscall CREDialog::CREDialog(CREDialog *this, const struct CREDialog *a2)
{
  sub_100710D0(this, (int)a2);
  *(_DWORD *)this = &CREDialog::`vftable';
  *((_BYTE *)this + 60) = *((_BYTE *)a2 + 60);
  *((_BYTE *)this + 61) = *((_BYTE *)a2 + 61);
  *((_BYTE *)this + 62) = *((_BYTE *)a2 + 62);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 84);
  *((_BYTE *)this + 85) = *((_BYTE *)a2 + 85);
  *((_BYTE *)this + 86) = *((_BYTE *)a2 + 86);
  *((_BYTE *)this + 87) = *((_BYTE *)a2 + 87);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((float *)this + 23) = *((float *)a2 + 23);
  *((float *)this + 24) = *((float *)a2 + 24);
  *((_BYTE *)this + 100) = *((_BYTE *)a2 + 100);
  std::wstring::wstring((char *)this + 104, (char *)a2 + 104);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((double *)this + 20) = *((double *)a2 + 20);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  *((_BYTE *)this + 176) = *((_BYTE *)a2 + 176);
  *((_BYTE *)this + 177) = *((_BYTE *)a2 + 177);
  *((_BYTE *)this + 178) = *((_BYTE *)a2 + 178);
  qmemcpy((char *)this + 180, (char *)a2 + 180, 0x260u);
  qmemcpy((char *)this + 788, (char *)a2 + 788, 0x24Cu);
  qmemcpy((char *)this + 1376, (char *)a2 + 1376, 0x938u);
  sub_1000D900((_DWORD *)this + 934, (int)a2 + 3736);
  return this;
}
