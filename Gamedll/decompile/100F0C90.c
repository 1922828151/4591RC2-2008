/*
 * func-name: ?AddHUD@HUDSystem@@QAE_NPAVHUDBase@@@Z_0
 * func-address: 0x100f0c90
 * callers: 0x10005c54
 * callees: 0x1000e070, 0x10016473
 */

char __thiscall HUDSystem::AddHUD(HUDSystem *this, struct HUDBase *a2)
{
  int ***v2; // ebp
  char *v3; // esi
  int **i; // edi
  int v6; // edi
  int v7; // ebx

  v2 = (int ***)*((_DWORD *)this + 2);
  v3 = (char *)this + 4;
  for ( i = *v2; i != (int **)v2 && i[2] != (int *)a2; i = (int **)*i )
    ;
  if ( this == (HUDSystem *)-4 )
    _invalid_parameter_noinfo();
  if ( i != (int **)v2 )
    return 0;
  v6 = *((_DWORD *)v3 + 1);
  v7 = sub_10016473(v6, *(_DWORD *)(v6 + 4), (int)&a2);
  sub_1000E070(1);
  *(_DWORD *)(v6 + 4) = v7;
  **(_DWORD **)(v7 + 4) = v7;
  return 1;
}
