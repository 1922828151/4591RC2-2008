/*
 * func-name: sub_10299B50
 * func-address: 0x10299b50
 * callers: 0x10010456
 * callees: 0x1000de27, 0x1001221f
 */

int __thiscall sub_10299B50(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 76;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 76 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_1000DE27(v5, 1, a2);
    this[2] = v5 + 76;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_1001221F((int)&v8, (int)this, v7, a2);
  }
  return result;
}
