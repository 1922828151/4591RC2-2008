/*
 * func-name: sub_1002C8A0
 * func-address: 0x1002c8a0
 * callers: 0x1002cce0
 * callees: none
 */

_BYTE *__usercall sub_1002C8A0@<eax>(_BYTE *result@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  int v3; // edi
  char v5; // cl
  _BYTE *v6; // eax

  v3 = a3;
  if ( a3 > 0 )
  {
    do
    {
      v5 = *a2;
      *result = byte_103AC938[(unsigned __int8)*a2 >> 4];
      v6 = result + 1;
      *v6 = byte_103AC938[v5 & 0xF];
      result = v6 + 1;
      ++a2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
