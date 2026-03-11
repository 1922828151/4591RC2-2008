/*
 * func-name: sub_1009BC30
 * func-address: 0x1009bc30
 * callers: 0x10097910
 * callees: 0x1009b420, 0x1009bb80
 */

_BYTE *__thiscall sub_1009BC30(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  _BYTE *result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 104;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 104 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1009B420(v5, 1, a2);
    this[2] = (char *)v5 + 104;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_1009BB80(this, &v8, this, v7, a2);
  }
  return result;
}
