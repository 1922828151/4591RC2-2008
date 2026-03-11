/*
 * func-name: sub_10024EC0
 * func-address: 0x10024ec0
 * callers: 0x100490f0
 * callees: 0x1004e870
 */

_DWORD *__usercall sub_10024EC0@<eax>(int a1@<esi>)
{
  _DWORD **v1; // ecx
  _DWORD *result; // eax
  bool v3; // zf
  _DWORD *v4; // edi

  v1 = *(_DWORD ***)(a1 + 4);
  result = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = result == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*result;
      operator delete(result);
      result = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
  return result;
}
