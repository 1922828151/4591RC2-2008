/*
 * func-name: sub_10049FF0
 * func-address: 0x10049ff0
 * callers: 0x10024740, 0x10049330
 * callees: 0x1004e870
 */

int __usercall sub_10049FF0@<eax>(int a1@<esi>)
{
  _DWORD **v1; // ecx
  _DWORD *v2; // eax
  bool v3; // zf
  _DWORD *v4; // edi
  int result; // eax

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
  result = operator delete(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
