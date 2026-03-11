/*
 * func-name: ?GenerateMapState@MapStateManager@@IAEPAVMapState@@W4MAP_STATE@@@Z_0
 * func-address: 0x1027c9c0
 * callers: 0x10007293
 * callees: none
 */

int __thiscall MapStateManager::GenerateMapState(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v6; // ecx

  v3 = this[3];
  if ( v3 )
    v4 = (this[4] - v3) >> 2;
  else
    v4 = 0;
  if ( a2 > v4 )
    return 0;
  v5 = a2 - 1;
  v6 = this[3];
  if ( !v6 || v5 >= (this[4] - v6) >> 2 )
    _invalid_parameter_noinfo();
  return *(_DWORD *)(this[3] + 4 * v5);
}
