/*
 * func-name: sub_1010C9B0
 * func-address: 0x1010c9b0
 * callers: 0x100010a5
 * callees: 0x10003bed, 0x102c9d50
 */

void __usercall sub_1010C9B0(int a1@<ecx>, int a2@<edi>)
{
  int v3; // esi
  int i; // edi
  int v5; // [esp-4h] [ebp-Ch]
  int v6; // [esp+0h] [ebp-8h]

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v5 = a2;
    for ( i = *(_DWORD *)(a1 + 8); v3 != i; v3 += 84 )
      sub_10003BED(v5, v6);
    operator delete(*(void **)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
