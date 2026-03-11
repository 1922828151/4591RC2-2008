/*
 * func-name: sub_100D9C80
 * func-address: 0x100d9c80
 * callers: 0x100d6e70
 * callees: 0x100d92b0, 0x100d9b60
 */

_DWORD *__thiscall sub_100D9C80(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 36;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 36 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100D92B0(v5, 1, a2);
    this[2] = (char *)v5 + 36;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_100D9B60(this, &v8, this, v7, a2);
  }
  return result;
}
