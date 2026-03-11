/*
 * func-name: sub_100EE100
 * func-address: 0x100ee100
 * callers: 0x100eb8b0
 * callees: 0x100ed5c0, 0x100edf80
 */

_DWORD *__thiscall sub_100EE100(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _DWORD *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 80;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 80 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100ED5C0(v5, 1, a2);
    this[2] = (char *)v5 + 80;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return sub_100EDF80(this, &v8, this, v7, a2);
  }
  return result;
}
