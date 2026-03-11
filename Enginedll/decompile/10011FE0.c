/*
 * func-name: ?GetAllActorClasses@Factory@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
 * func-address: 0x10011fe0
 * callers: 0x100120c0, 0x10084100
 * callees: 0x1000b770, 0x100116a0
 */

_DWORD *__cdecl Factory::GetAllActorClasses(_DWORD *a1)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // ebp
  _DWORD *v5; // [esp+14h] [ebp-14h] BYREF
  _DWORD *v6; // [esp+18h] [ebp-10h]
  int v7; // [esp+24h] [ebp-4h]

  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v7 = 0;
  v1 = *(_DWORD **)dword_10285888;
  v2 = &_registry;
  v5 = &_registry;
  v6 = v1;
  while ( 1 )
  {
    v3 = dword_10285888;
    if ( !v2 || v2 != &_registry )
      invalid_parameter_noinfo();
    if ( v1 == v3 )
      break;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v1 == (_DWORD *)v2[1] )
      invalid_parameter_noinfo();
    if ( v1[10] )
    {
      if ( v1 == (_DWORD *)v2[1] )
        invalid_parameter_noinfo();
      if ( *(_BYTE *)(v1[10] + 4) )
      {
        if ( v1 == (_DWORD *)v2[1] )
          invalid_parameter_noinfo();
        sub_100116A0(a1, (void *)(v1[10] + 8));
      }
    }
    sub_1000B770(&v5);
    v1 = v6;
    v2 = v5;
  }
  return a1;
}
