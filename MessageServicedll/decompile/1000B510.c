/*
 * func-name: sub_1000B510
 * func-address: 0x1000b510
 * callers: 0x1000aff0
 * callees: 0x1000a8c0, 0x100294f2
 */

_DWORD *__userpurge sub_1000B510@<eax>(int a1@<ebx>, _DWORD *a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // ebp
  _DWORD *result; // eax

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = *a4;
  if ( a4 != *(_DWORD ***)(a1 + 4) )
  {
    *a4[1] = v4;
    (*a4)[1] = a4[1];
    sub_1000A8C0((int)(a4 + 2));
    operator delete(a4);
    --*(_DWORD *)(a1 + 8);
  }
  result = a2;
  *a2 = a3;
  a2[1] = v4;
  return result;
}
