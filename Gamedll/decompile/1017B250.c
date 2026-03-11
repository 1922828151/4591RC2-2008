/*
 * func-name: ?ChangeEquip@Robot@GameClient@@QAEXABV?$vector@PAVEquip@GameClient@@V?$allocator@PAVEquip@GameClient@@@std@@@std@@PAVBooty@2@@Z_0
 * func-address: 0x1017b250
 * callers: 0x100137cd
 * callees: 0x100025b3, 0x10003b52, 0x10006a19, 0x100084f4, 0x1000aff6, 0x1000e8db, 0x1000ef34, 0x10010c85, 0x10011766, 0x1001816a, 0x1001a320, 0x102c9d50
 */

void __thiscall GameClient::Robot::ChangeEquip(GameClient::Robot *this, int a2, GameClient::Booty *a3)
{
  int v4; // ebp
  int v5; // eax
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  struct GameClient::Equip *v12; // ebx
  int v13; // ecx
  struct GameClient::Equip *v14; // eax
  GameClient::FlyweightManager *v15; // eax
  int v16; // eax
  Event *v17; // eax
  int v18; // esi
  struct BinStream *Stream; // edi
  unsigned int v20; // [esp+0h] [ebp-38h]
  unsigned int v21; // [esp+4h] [ebp-34h]
  int v22; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v23; // [esp+20h] [ebp-18h]
  int v24; // [esp+24h] [ebp-14h]
  int v25; // [esp+28h] [ebp-10h]
  int v26; // [esp+34h] [ebp-4h]

  v4 = a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = 0;
  if ( v5 )
    v7 = (*(_DWORD *)(a2 + 8) - v5) >> 2;
  else
    v7 = 0;
  v8 = *((_DWORD *)this + 63);
  if ( v8 )
    v9 = (*((_DWORD *)this + 64) - v8) >> 2;
  else
    v9 = 0;
  if ( v7 == v9 )
  {
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    if ( sub_1000E8DB() )
    {
      do
      {
        v10 = *(_DWORD *)(v4 + 4);
        if ( !v10 || v6 >= (*(_DWORD *)(v4 + 8) - v10) >> 2 )
          _invalid_parameter_noinfo();
        v11 = *((_DWORD *)this + 63);
        v12 = *(struct GameClient::Equip **)(*(_DWORD *)(v4 + 4) + 4 * v6);
        if ( !v11 || v6 >= (*((_DWORD *)this + 64) - v11) >> 2 )
          _invalid_parameter_noinfo();
        if ( *(struct GameClient::Equip **)(*((_DWORD *)this + 63) + 4 * v6) != v12 )
        {
          if ( a3 && GameClient::WorldObject::IsLocal(this) )
          {
            GameClient::Booty::RemoveEquip(a3, v12);
            v13 = *((_DWORD *)this + 63);
            if ( !v13 || v6 >= (*((_DWORD *)this + 64) - v13) >> 2 )
              _invalid_parameter_noinfo();
            GameClient::Booty::AddEquip(a3, *(struct GameClient::Equip **)(*((_DWORD *)this + 63) + 4 * v6));
          }
          v14 = GameClient::Robot::AddEquip(this, v12, v6);
          if ( v14 )
          {
            v21 = *((_DWORD *)v14 + 3);
            v20 = *((_DWORD *)v14 + 1);
            v15 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::DeleteInstance(v15, v20, v21);
          }
        }
        if ( v12 )
          a2 = *((_DWORD *)v12 + 2);
        else
          a2 = 0;
        sub_10011766(&v22, (int)&a2);
        ++v6;
      }
      while ( v6 < sub_1000E8DB() );
    }
    *((_DWORD *)this + 84) = GameClient::Robot::ComputerTotalMass((int)&v22);
    *((_DWORD *)this + 85) = GameClient::Robot::ComputerTotalPower((int)&v22);
    if ( GameClient::WorldObject::IsLocal(this) )
    {
      v16 = EventAttemper::Instance(9, 4150);
      v17 = (Event *)EventAttemper::AddEvent(v16);
      v18 = *((_DWORD *)this + 3);
      Stream = Event::GetStream(v17);
      sub_1001816A(4);
      *(_DWORD *)(*((_DWORD *)Stream + 1) + *((_DWORD *)Stream + 2)) = v18;
      *((_DWORD *)Stream + 2) += 4;
    }
    if ( v23 )
      operator delete(v23);
  }
}
