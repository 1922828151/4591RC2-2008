/*
 * func-name: sub_10176A80
 * func-address: 0x10176a80
 * callers: 0x101770d0
 * callees: 0x101768b0
 */

_DWORD *__thiscall sub_10176A80(int *this)
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
  return sub_101768B0(this, &v5, (int)this, v3, (int)this, v2);
}
