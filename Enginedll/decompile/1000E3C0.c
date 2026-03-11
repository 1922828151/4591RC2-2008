/*
 * func-name: ?CreateFromIndex@Factory@@SAPAVActor@@HPAVWorld@@@Z
 * func-address: 0x1000e3c0
 * callers: none
 * callees: 0x1000b770
 */

struct Actor *__cdecl Factory::CreateFromIndex(int a1, struct World *a2)
{
  _DWORD *v2; // esi
  int (__thiscall ****v3)(_DWORD, struct World *); // ebp
  int v4; // edi
  int (__thiscall ****v5)(_DWORD, struct World *); // ebx
  _DWORD *v7; // [esp+10h] [ebp-8h] BYREF
  int (__thiscall ****v8)(_DWORD, struct World *); // [esp+14h] [ebp-4h]

  v2 = &_registry;
  v3 = *(int (__thiscall *****)(_DWORD, struct World *))dword_10285888;
  v4 = 0;
  v7 = &_registry;
  v8 = v3;
  while ( 1 )
  {
    v5 = (int (__thiscall ****)(_DWORD, struct World *))dword_10285888;
    if ( !v2 || v2 != (_DWORD *)&_registry )
      invalid_parameter_noinfo();
    if ( v3 == v5 )
      return 0;
    if ( v4 == a1 )
      break;
    ++v4;
    sub_1000B770(&v7);
    v3 = v8;
    v2 = v7;
  }
  if ( !v2 )
    invalid_parameter_noinfo();
  if ( v3 == (int (__thiscall ****)(_DWORD, struct World *))v2[1] )
    invalid_parameter_noinfo();
  return (struct Actor *)(**v3[10])(v3[10], a2);
}
