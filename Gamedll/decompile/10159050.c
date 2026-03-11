/*
 * func-name: sub_10159050
 * func-address: 0x10159050
 * callers: 0x1001a89d
 * callees: 0x10005cb3, 0x1000cb1c
 */

int __thiscall sub_10159050(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 20;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 20 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_10005CB3(v5, 1, (int)a2);
    this[2] = v5 + 20;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_1000CB1C((int)&v8, (int)this, v7, a2);
  }
  return result;
}
