/*
 * func-name: sub_10140370
 * func-address: 0x10140370
 * callers: 0x1013fac0
 * callees: 0x1012b470, 0x10140250
 */

char *__thiscall sub_10140370(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // edi
  char *result; // eax
  char *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 56;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 56 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1012B470((char *)v8, v5, 1, a2);
    this[2] = v5 + 56;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (char *)sub_10140250(this, &v8, this, v7, a2);
  }
  return result;
}
