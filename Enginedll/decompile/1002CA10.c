/*
 * func-name: sub_1002CA10
 * func-address: 0x1002ca10
 * callers: 0x1002f070
 * callees: 0x10010e50
 */

_DWORD *__thiscall sub_1002CA10(_DWORD *this)
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
  return sub_10010E50(this, &v5, (int)this, v3, (int)this, v2);
}
