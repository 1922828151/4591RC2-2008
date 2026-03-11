/*
 * func-name: sub_100FC820
 * func-address: 0x100fc820
 * callers: 0x1000b1a9
 * callees: 0x1000cfa4, 0x100152c1
 */

int __thiscall sub_100FC820(_DWORD *this, int a2)
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
    result = sub_1000CFA4(v5, 1, a2);
    this[2] = v5 + 36;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_100152C1((int)&v8, (int)this, v7, a2);
  }
  return result;
}
