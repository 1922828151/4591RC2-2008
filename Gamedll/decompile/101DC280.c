/*
 * func-name: sub_101DC280
 * func-address: 0x101dc280
 * callers: 0x10003fb7
 * callees: 0x100074c3, 0x102c9d50
 */

void __usercall sub_101DC280(int a1@<ecx>, int a2@<ebx>)
{
  _DWORD **v3; // eax
  _DWORD *v4; // esi
  bool v5; // zf
  _DWORD *v6; // ebx
  int v7; // [esp-4h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD ***)(a1 + 4);
  v4 = *v3;
  *v3 = v3;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v5 = v4 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v5 )
  {
    v7 = a2;
    do
    {
      v6 = (_DWORD *)*v4;
      sub_100074C3(v7, v8);
      operator delete(v4);
      v4 = v6;
    }
    while ( v6 != *(_DWORD **)(a1 + 4) );
  }
}
