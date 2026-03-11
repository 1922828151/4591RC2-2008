/*
 * func-name: ?Tick@MapStateManager@@QAEXXZ_0
 * func-address: 0x1027af20
 * callers: 0x10009863
 * callees: none
 */

void __thiscall MapStateManager::Tick(MapStateManager *this)
{
  int v1; // ecx

  v1 = *(_DWORD *)this;
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
}
