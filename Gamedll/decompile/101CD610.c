/*
 * func-name: sub_101CD610
 * func-address: 0x101cd610
 * callers: 0x10012968
 * callees: 0x100091d3, 0x1001294a
 */

int __thiscall sub_101CD610(_DWORD *this, int a2)
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
    result = sub_1001294A(v5, 1, a2);
    this[2] = v5 + 8;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_100091D3((int)&v8, (int)this, v7, a2);
  }
  return result;
}
