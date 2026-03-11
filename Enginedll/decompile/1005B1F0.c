/*
 * func-name: sub_1005B1F0
 * func-address: 0x1005b1f0
 * callers: 0x10055500, 0x100566a0, 0x10062a00, 0x100c5d60, 0x100c6a80, 0x100d3c10, 0x1011b870, 0x1011d270, 0x10136400, 0x101364b0
 * callees: 0x10059c90
 */

_DWORD *__thiscall sub_1005B1F0(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int *v5; // eax
  _DWORD *result; // eax
  char *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    v5 = (int *)this[2];
    *v5 = *a2;
    result = v5 + 1;
    this[2] = result;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_10059C90(this, &v8, this, v7, a2);
  }
  return result;
}
