/*
 * func-name: sub_1019A740
 * func-address: 0x1019a740
 * callers: 0x10015e3d
 * callees: 0x10001d66, 0x10010c80
 */

int __thiscall sub_1019A740(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 12;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 12 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_10010C80(v5, 1, (int)a2);
    this[2] = v5 + 12;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10001D66((int)&v8, (int)this, v7, a2);
  }
  return result;
}
