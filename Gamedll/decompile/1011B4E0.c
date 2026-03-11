/*
 * func-name: sub_1011B4E0
 * func-address: 0x1011b4e0
 * callers: 0x1000ab4b
 * callees: 0x100107d0, 0x10012fdf
 */

int __thiscall sub_1011B4E0(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 28;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 28 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100107D0(v5, 1, a2);
    this[2] = v5 + 28;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10012FDF((int)&v8, (int)this, v7, a2);
  }
  return result;
}
