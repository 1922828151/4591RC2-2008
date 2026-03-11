/*
 * func-name: sub_10006700
 * func-address: 0x10006700
 * callers: 0x100052d0, 0x10005370, 0x10005930, 0x100177b0
 * callees: 0x10018cf2
 */

void __usercall sub_10006700(int a1@<esi>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  bool v3; // zf
  _DWORD *v4; // edi

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
  operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
}
