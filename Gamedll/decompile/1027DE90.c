/*
 * func-name: ??0MapStateManager@@QAE@XZ_0
 * func-address: 0x1027de90
 * callers: 0x10013fca
 * callees: 0x10002a90, 0x10006b1d, 0x102c9d98
 */

MapStateManager *__thiscall MapStateManager::MapStateManager(MapStateManager *this)
{
  char *v2; // esi
  _DWORD *v3; // eax
  BigMapState *v4; // eax
  BigMapState *v5; // eax
  int v7[2]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v7[1] = (int)this;
  v2 = (char *)this + 8;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  v8 = 0;
  v3 = operator new(8u);
  if ( v3 )
  {
    v3[1] = 0;
    *v3 = &RadarMapState::`vftable';
  }
  else
  {
    v3 = 0;
  }
  v7[0] = (int)v3;
  sub_10002A90(v2, (int)v7);
  v4 = (BigMapState *)operator new(0x64u);
  v7[0] = (int)v4;
  LOBYTE(v8) = 1;
  if ( v4 )
    v5 = BigMapState::BigMapState(v4);
  else
    v5 = 0;
  LOBYTE(v8) = 0;
  v7[0] = (int)v5;
  sub_10002A90(v2, (int)v7);
  return this;
}
