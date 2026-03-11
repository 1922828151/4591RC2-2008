/*
 * func-name: sub_1015AB20
 * func-address: 0x1015ab20
 * callers: 0x10159c30
 * callees: 0x1015a280, 0x1015aa40
 */

char *__thiscall sub_1015AB20(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  char *result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 84;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 84 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = sub_1015A280(v5, 1, a2);
    this[2] = (char *)v5 + 84;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return (char *)sub_1015AA40(this, &v8, this, v7, a2);
  }
  return result;
}
