/*
 * func-name: sub_100F2870
 * func-address: 0x100f2870
 * callers: 0x10011f04
 * callees: 0x100055e2, 0x10016fb8
 */

int __thiscall sub_100F2870(_DWORD *this, void *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 6;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 6 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_100055E2(v5, 1, a2);
    this[2] = v5 + 64;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10016FB8((int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
