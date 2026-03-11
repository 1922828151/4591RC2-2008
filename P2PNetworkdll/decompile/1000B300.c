/*
 * func-name: sub_1000B300
 * func-address: 0x1000b300
 * callers: 0x100041d0
 * callees: 0x1000d390, 0x1000da30
 */

void __usercall sub_1000B300(int a1@<eax>, int a2@<ecx>)
{
  void *v3; // edi
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ebp
  int v7; // [esp+10h] [ebp-Ch] BYREF
  void *v8; // [esp+14h] [ebp-8h]

  sub_1000DA30(&v7, a1);
  v3 = *(void **)(a2 + 176);
  v4 = a2 + 172;
  v5 = v7;
  if ( !v7 || v7 != v4 )
    invalid_parameter_noinfo();
  v6 = v8;
  if ( v8 != v3 )
  {
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v6 == *(_DWORD **)(v5 + 4) )
      invalid_parameter_noinfo();
    *(_DWORD *)(v6[9] + 36) = -1;
    sub_1000D390((int)&v7, v5, v6);
  }
}
