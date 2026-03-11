/*
 * func-name: sub_100DCA40
 * func-address: 0x100dca40
 * callers: 0x10004d22
 * callees: 0x100106a9, 0x10013b38
 */

int __thiscall sub_100DCA40(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 120;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 120 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_100106A9(v5, 1, a2);
    this[2] = v5 + 120;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10013B38((int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
