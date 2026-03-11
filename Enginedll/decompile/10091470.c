/*
 * func-name: sub_10091470
 * func-address: 0x10091470
 * callers: 0x10087570, 0x10087a10, 0x10088400
 * callees: 0x10090000, 0x100910f0
 */

char *__thiscall sub_10091470(_DWORD *this, void *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  char *v5; // edi
  char *result; // eax
  char *v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 5;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 5 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_10090000((char *)v8, v5, 1, a2);
    this[2] = v5 + 32;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (char *)sub_100910F0(this, &v8, this, v7, a2);
  }
  return result;
}
