/*
 * func-name: sub_10134CB0
 * func-address: 0x10134cb0
 * callers: 0x10133ce0, 0x10134090
 * callees: 0x1012b4a0, 0x10134c00
 */

char *__thiscall sub_10134CB0(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  char *v5; // edi
  char *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 176;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 176 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1012B4A0((char *)v8, v5, 1, a2);
    this[2] = v5 + 176;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (char *)sub_10134C00(this, &v8, this, v7, a2);
  }
  return result;
}
