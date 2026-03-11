/*
 * func-name: ??0CREControl@@QAE@ABV0@@Z
 * func-address: 0x10071230
 * callers: 0x100717b0, 0x10071d40, 0x10071f90, 0x100721d0, 0x100724e0, 0x10072770, 0x10072bb0, 0x10072db0, 0x10073700, 0x10073b00, 0x10074170, 0x10074690, 0x100d4880, 0x100d4910, 0x100d49d0, 0x100d4d00, 0x100d4f90
 * callees: 0x100710d0, 0x101a27ab
 */

CREControl *__thiscall CREControl::CREControl(CREControl *this, const struct CREControl *a2)
{
  sub_100710D0(this, (int)a2);
  *(_DWORD *)this = &CREControl::`vftable';
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_BYTE *)this + 84) = *((_BYTE *)a2 + 84);
  *((_BYTE *)this + 85) = *((_BYTE *)a2 + 85);
  *((_BYTE *)this + 86) = *((_BYTE *)a2 + 86);
  *((_BYTE *)this + 87) = *((_BYTE *)a2 + 87);
  *((_BYTE *)this + 88) = *((_BYTE *)a2 + 88);
  *((_BYTE *)this + 89) = *((_BYTE *)a2 + 89);
  *((_BYTE *)this + 90) = *((_BYTE *)a2 + 90);
  *((_BYTE *)this + 91) = *((_BYTE *)a2 + 91);
  *((_BYTE *)this + 92) = *((_BYTE *)a2 + 92);
  *((_BYTE *)this + 93) = *((_BYTE *)a2 + 93);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 27) = *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 29);
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  *((_DWORD *)this + 31) = *((_DWORD *)a2 + 31);
  *((_DWORD *)this + 32) = *((_DWORD *)a2 + 32);
  *((_BYTE *)this + 132) = *((_BYTE *)a2 + 132);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_BYTE *)this + 156) = *((_BYTE *)a2 + 156);
  *((_BYTE *)this + 157) = *((_BYTE *)a2 + 157);
  *((float *)this + 40) = *((float *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  `eh vector copy constructor iterator'(
    (char *)this + 180,
    (char *)a2 + 180,
    0x1Cu,
    7,
    std::wstring::wstring,
    std::wstring::~wstring);
  qmemcpy((char *)this + 376, (char *)a2 + 376, 0x70u);
  qmemcpy((char *)this + 488, (char *)a2 + 488, 0x1Du);
  *((_DWORD *)this + 130) = *((_DWORD *)a2 + 130);
  *((_DWORD *)this + 131) = *((_DWORD *)a2 + 131);
  *((float *)this + 132) = *((float *)a2 + 132);
  return this;
}
