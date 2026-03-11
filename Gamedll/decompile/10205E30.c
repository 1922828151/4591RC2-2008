/*
 * func-name: sub_10205E30
 * func-address: 0x10205e30
 * callers: 0x10017a8a
 * callees: 0x10016cf2, 0x102c9d50
 */

void __usercall sub_10205E30(int a1@<ecx>, int a2@<edi>)
{
  int v3; // esi
  int i; // edi
  int v5; // [esp-4h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v5 = a2;
    for ( i = *(_DWORD *)(a1 + 8); v3 != i; v3 += 128 )
      sub_10016CF2(v5, v6);
    operator delete(*(void **)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
