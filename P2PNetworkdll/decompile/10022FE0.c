/*
 * func-name: sub_10022FE0
 * func-address: 0x10022fe0
 * callers: 0x1001f170, 0x10022c90
 * callees: none
 */

_DWORD *__usercall sub_10022FE0@<eax>(int a1@<ebx>)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *result; // eax
  _DWORD *v4; // esi

  v1 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      free(v1);
      v1 = v2;
    }
    while ( v2 );
  }
  result = *(_DWORD **)(a1 + 4);
  *(_DWORD *)a1 = 0;
  if ( result )
  {
    do
    {
      v4 = (_DWORD *)*result;
      free(result);
      result = v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
