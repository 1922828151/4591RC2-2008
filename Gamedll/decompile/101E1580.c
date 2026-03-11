/*
 * func-name: sub_101E1580
 * func-address: 0x101e1580
 * callers: 0x10003f21
 * callees: 0x10004c05, 0x1000e499
 */

int __thiscall sub_101E1580(_DWORD *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 3;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 3 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_1000E499(v5, 1, a2);
    this[2] = v5 + 8;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10004C05((int)&v8, (int)this, v7, a2);
  }
  return result;
}
