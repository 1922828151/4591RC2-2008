/*
 * func-name: sub_10259940
 * func-address: 0x10259940
 * callers: 0x100179bd
 * callees: 0x10007559, 0x10013278
 */

int __thiscall sub_10259940(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 36;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 36 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_10013278(v5, 1, a2);
    this[2] = v5 + 36;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10007559((int)&v8, (int)this, v7, a2);
  }
  return result;
}
