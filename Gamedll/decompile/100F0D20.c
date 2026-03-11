/*
 * func-name: ?RemoveHUD@HUDSystem@@QAE_NPAVHUDBase@@@Z_0
 * func-address: 0x100f0d20
 * callers: 0x1000a8e4
 * callees: 0x1001424f
 */

char __thiscall HUDSystem::RemoveHUD(HUDSystem *this, struct HUDBase *a2)
{
  char *v2; // esi
  void **v3; // ecx
  struct HUDBase **i; // edi
  struct HUDBase **v5; // ebx
  int v7; // [esp+8h] [ebp-8h] BYREF
  struct HUDBase **v8; // [esp+Ch] [ebp-4h]

  v2 = (char *)this + 4;
  v3 = (void **)*((_DWORD *)this + 2);
  v8 = (struct HUDBase **)*v3;
  for ( i = v8; i != (struct HUDBase **)v3 && i[2] != a2; i = (struct HUDBase **)*i )
    ;
  v5 = (struct HUDBase **)*((_DWORD *)v2 + 1);
  if ( !v2 )
    _invalid_parameter_noinfo();
  if ( i == v5 )
    return 0;
  sub_1001424F((int)&v7, (int)v2, i);
  return 1;
}
