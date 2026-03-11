/*
 * func-name: sub_10115B50
 * func-address: 0x10115b50
 * callers: 0x10115d40
 * callees: 0x10115740
 */

_DWORD *__thiscall sub_10115B50(int *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = this[2];
  if ( this[1] > v2 )
    invalid_parameter_noinfo();
  v3 = this[1];
  if ( v3 > this[2] )
    invalid_parameter_noinfo();
  return sub_10115740(this, &v5, (int)this, v3, (int)this, v2);
}
