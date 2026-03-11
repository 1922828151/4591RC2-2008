/*
 * func-name: ??0MapStateManager@@QAE@ABV0@@Z_0
 * func-address: 0x10076200
 * callers: 0x1000e67e
 * callees: 0x1000cb85
 */

MapStateManager *__thiscall MapStateManager::MapStateManager(MapStateManager *this, const struct MapStateManager *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  sub_1000CB85((int)a2 + 8);
  return this;
}
