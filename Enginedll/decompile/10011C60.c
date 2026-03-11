/*
 * func-name: sub_10011C60
 * func-address: 0x10011c60
 * callers: 0x10012f30
 * callees: 0x10010060
 */

_DWORD *__thiscall sub_10011C60(int *this)
{
  unsigned int v2; // edi
  _DWORD *v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = (_DWORD *)this[1];
  if ( (unsigned int)v3 > this[2] )
    invalid_parameter_noinfo();
  return sub_10010060(this, &v5, (int)this, v3, (int)this, v2);
}
