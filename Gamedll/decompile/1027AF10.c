/*
 * func-name: ?ChangeLevel@MapStateManager@@QAEXJ@Z_0
 * func-address: 0x1027af10
 * callers: 0x10015f78
 * callees: none
 */

void __thiscall MapStateManager::ChangeLevel(MapStateManager *this, int a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)this;
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 20))(v2, a2);
}
