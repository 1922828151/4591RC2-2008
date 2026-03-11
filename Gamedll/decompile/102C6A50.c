/*
 * func-name: sub_102C6A50
 * func-address: 0x102c6a50
 * callers: 0x102c3880, 0x102c3940, 0x102c3a00, 0x102c3ac0, 0x102c3b80, 0x102c3c40, 0x102c3d00, 0x102c3dc0, 0x102c3e80, 0x102c3f40, 0x102c4000, 0x102c40c0, 0x102c4180, 0x102c4240
 * callees: 0x102c53f0, 0x102c6810
 */

int **__thiscall sub_102C6A50(int *this, void *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  int **result; // eax
  void *v7; // edi
  int *v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 6;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 6 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = (int **)sub_102C53F0(v5, 1, a2);
    this[2] = v5 + 64;
  }
  else
  {
    v7 = (void *)this[2];
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    return sub_102C6810(this, &v8, (int)this, v7, a2);
  }
  return result;
}
