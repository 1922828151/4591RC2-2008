/*
 * func-name: sub_10052AE0
 * func-address: 0x10052ae0
 * callers: 0x100509d0, 0x10055de0, 0x1005b610, 0x10087570, 0x10087a10, 0x10088400, 0x1008e470, 0x100de140, 0x100debd0, 0x100df070, 0x100e0bb0, 0x100efe90, 0x100f04f0, 0x10117a10, 0x1013a940, 0x10140340
 * callees: 0x100529c0
 */

_DWORD *__thiscall sub_10052AE0(_DWORD *this, int *a2)
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
    return sub_100529C0(this, &v8, this, v7, a2);
  }
  return result;
}
