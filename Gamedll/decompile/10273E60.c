/*
 * func-name: sub_10273E60
 * func-address: 0x10273e60
 * callers: 0x1000bb95
 * callees: 0x10010a96, 0x1001a8ed
 */

int __thiscall sub_10273E60(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 80;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 80 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_10010A96(v5, 1, (int)a2, (int)this);
    this[2] = v5 + 80;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_1001A8ED((int)&v8, (int)this, v7, a2);
  }
  return result;
}
