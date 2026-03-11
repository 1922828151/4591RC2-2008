/*
 * func-name: sub_10220C50
 * func-address: 0x10220c50
 * callers: 0x1000f7c7
 * callees: 0x1000c194, 0x100144cf
 */

int __thiscall sub_10220C50(_DWORD *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_100144CF(v5, 1, a2);
    this[2] = v5 + 4;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_1000C194((int)&v8, (int)this, v7, a2);
  }
  return result;
}
