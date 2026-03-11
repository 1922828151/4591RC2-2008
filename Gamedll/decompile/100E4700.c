/*
 * func-name: sub_100E4700
 * func-address: 0x100e4700
 * callers: 0x1000d634
 * callees: 0x1000e331, 0x10019425
 */

int __thiscall sub_100E4700(_DWORD *this, int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 92;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 92 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_10019425(v5, 1, a2);
    this[2] = v5 + 92;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_1000E331((int)&v8, (int)this, v7, a2);
  }
  return result;
}
