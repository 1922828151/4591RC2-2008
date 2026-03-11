/*
 * func-name: sub_10076EA0
 * func-address: 0x10076ea0
 * callers: 0x10002289
 * callees: 0x10016cf2, 0x102c9d50
 */

void __usercall sub_10076EA0(int a1@<ecx>, int a2@<ebx>)
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
      sub_10016CF2(v7, v8);
      operator delete(v4);
      v4 = v6;
    }
    while ( v6 != *(_DWORD **)(a1 + 4) );
  }
}
