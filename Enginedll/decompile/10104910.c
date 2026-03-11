/*
 * func-name: sub_10104910
 * func-address: 0x10104910
 * callers: 0x10139890
 * callees: 0x10104050, 0x101042c0
 */

void __thiscall sub_10104910(int *this, Camera *a2, _DWORD *a3)
{
  int v4; // ecx

  ++dword_11240DEC;
  v4 = *this;
  if ( v4 )
  {
    sub_10104050(v4, a2, this[1], a3, 1, this[2]);
    sub_101042C0(*this, a2, this[1], a3, 1, this[2]);
  }
}
