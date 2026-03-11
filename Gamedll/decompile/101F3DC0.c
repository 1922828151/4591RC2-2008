/*
 * func-name: ??1ChatManager@GameClient@@UAE@XZ_0
 * func-address: 0x101f3dc0
 * callers: 0x1000f3a3
 * callees: 0x1000484a, 0x1001259e, 0x102c9d50
 */

void __thiscall GameClient::ChatManager::~ChatManager(GameClient::ChatManager *this)
{
  void *v2; // eax
  int v3; // [esp+0h] [ebp-28h]
  int v4; // [esp+4h] [ebp-24h]
  _BYTE v5[8]; // [esp+14h] [ebp-14h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  *(_DWORD *)this = &GameClient::ChatManager::`vftable';
  v2 = (void *)*((_DWORD *)this + 4);
  v6 = 0;
  if ( v2 )
  {
    operator delete(v2);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 5) = &GameClient::CAnalyzeSystem::`vftable';
  sub_1000484A((int)v5, (int)this + 24, **((_DWORD **)this + 7), (int)this + 24, *((_DWORD *)this + 7));
  operator delete(*((void **)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v6 = -1;
  sub_1001259E(v3, v4);
  operator delete(*((void **)this + 2));
  *((_DWORD *)this + 2) = 0;
}
