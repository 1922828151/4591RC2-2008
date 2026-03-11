/*
 * func-name: sub_101F1C40
 * func-address: 0x101f1c40
 * callers: 0x100160fe
 * callees: 0x10019209
 */

int __thiscall sub_101F1C40(_DWORD *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  _BYTE v5[8]; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    _invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    _invalid_parameter_noinfo();
  return sub_10019209((int)v5, (int)this, v3, (int)this, v2);
}
