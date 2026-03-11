/*
 * func-name: sub_1011AD30
 * func-address: 0x1011ad30
 * callers: 0x1000e192
 * callees: 0x100129d6, 0x102c9d50
 */

void __usercall sub_1011AD30(int a1@<ecx>, int a2@<edi>)
{
  int v3; // esi
  int i; // edi
  int v5; // [esp-4h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v5 = a2;
    for ( i = *(_DWORD *)(a1 + 8); v3 != i; v3 += 936 )
      sub_100129D6(v5, v6);
    operator delete(*(void **)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
