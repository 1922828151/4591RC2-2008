/*
 * func-name: ??1BattleFieldManager@GameClient@@UAE@XZ_0
 * func-address: 0x1021d650
 * callers: 0x1000ce2d
 * callees: 0x10003fb7, 0x1000d526, 0x102c9d50
 */

void __thiscall GameClient::BattleFieldManager::~BattleFieldManager(GameClient::BattleFieldManager *this)
{
  void *v2; // eax

  *(_DWORD *)this = &GameClient::BattleFieldManager::`vftable';
  v2 = (void *)*((_DWORD *)this + 16);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  sub_10003FB7();
  operator delete(*((void **)this + 13));
  *((_DWORD *)this + 13) = 0;
  if ( *((_DWORD *)this + 6) )
    operator delete(*((void **)this + 6));
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  sub_1000D526();
}
