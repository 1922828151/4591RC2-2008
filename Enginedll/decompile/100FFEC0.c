/*
 * func-name: sub_100FFEC0
 * func-address: 0x100ffec0
 * callers: 0x100fb120
 * callees: 0x100fe6d0, 0x100ff7f0
 */

char *__thiscall sub_100FFEC0(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // edi
  char *result; // eax
  char *v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 60;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 60 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100FE6D0((char *)v8, v5, 1, a2);
    this[2] = v5 + 60;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (char *)sub_100FF7F0(this, &v8, this, v7, a2);
  }
  return result;
}
