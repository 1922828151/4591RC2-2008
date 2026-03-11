/*
 * func-name: ?FindAnimFromCache@AnimationSet@@SAPAV1@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100f2c20
 * callers: 0x10171950
 * callees: 0x1010fd40
 */

int __cdecl AnimationSet::FindAnimFromCache(int a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // edi
  _DWORD *v7; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v8; // [esp+14h] [ebp-4h]

  sub_1010FD40(&v7, a1);
  v1 = v7;
  v2 = dword_11240DB8;
  if ( !v7 || v7 != (_DWORD *)&unk_11240DB4 )
    invalid_parameter_noinfo();
  v3 = v8;
  if ( v8 == v2 )
    return 0;
  if ( !v1 )
    invalid_parameter_noinfo();
  if ( v3 == (_DWORD *)v1[1] )
    invalid_parameter_noinfo();
  if ( !v3[11] )
    return 0;
  if ( v3 == (_DWORD *)v1[1] )
    invalid_parameter_noinfo();
  v4 = (_DWORD *)v3[10];
  v5 = (_DWORD *)*v4;
  if ( (_DWORD *)*v4 == v4 )
    invalid_parameter_noinfo();
  return v5[2];
}
