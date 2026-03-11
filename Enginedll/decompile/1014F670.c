/*
 * func-name: sub_1014F670
 * func-address: 0x1014f670
 * callers: 0x1014f720
 * callees: 0x1014e850, 0x1014f5b0
 */

_DWORD *__thiscall sub_1014F670(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 68;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 68 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1014E850(v5, 1, a2);
    this[2] = (char *)v5 + 68;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_1014F5B0(this, &v8, this, v7, a2);
  }
  return result;
}
