/*
 * func-name: sub_10003310
 * func-address: 0x10003310
 * callers: 0x10004890
 * callees: 0x10003f40
 */

Input *__thiscall sub_10003310(Input *this)
{
  int v3[13]; // [esp-1Ch] [ebp-40h] BYREF
  int v4; // [esp+20h] [ebp-4h]

  v3[11] = (int)this;
  Input::Input(this);
  *(_DWORD *)this = &DXInput::`vftable';
  v4 = 0;
  *((_DWORD *)this + 1826) = 0;
  *((_DWORD *)this + 1827) = 0;
  *((_DWORD *)this + 1828) = 0;
  std::string::string((char *)this + 7320);
  *((_DWORD *)this + 1527) = 0;
  *((_DWORD *)this + 1521) = 0;
  *((_DWORD *)this + 1522) = 0;
  *((_DWORD *)this + 1523) = 0;
  *((_DWORD *)this + 1524) = 0;
  *((_DWORD *)this + 1525) = 0;
  *((_DWORD *)this + 1526) = 0;
  LOBYTE(v4) = 2;
  *((_DWORD *)this + 1520) = 0;
  *((_DWORD *)this + 1528) = 0;
  v3[12] = (int)v3;
  std::string::string(v3);
  sub_10003F40((int *)this + 1825, 4u, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6]);
  dword_100384E8 = (int)this;
  return this;
}
