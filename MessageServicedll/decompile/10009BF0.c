/*
 * func-name: sub_10009BF0
 * func-address: 0x10009bf0
 * callers: 0x10003220, 0x10008b40, 0x10008df0, 0x100090e0
 * callees: 0x100294f2
 */

_DWORD *__usercall sub_10009BF0@<eax>(int a1@<esi>)
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
