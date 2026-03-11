/*
 * func-name: sub_101F5E90
 * func-address: 0x101f5e90
 * callers: 0x10003670
 * callees: 0x10002716, 0x10008364
 */

int __thiscall sub_101F5E90(_DWORD *this, int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 60;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 60 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_10002716(v5, 1, a2);
    this[2] = v5 + 60;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10008364((int)&v8, (int)this, v7, a2);
  }
  return result;
}
