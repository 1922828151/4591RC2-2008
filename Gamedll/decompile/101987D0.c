/*
 * func-name: ?Update@Weapon@GameClient@@UAEXM@Z_0
 * func-address: 0x101987d0
 * callers: 0x1000baaf
 * callees: 0x10006690, 0x10006a19, 0x100099f3, 0x1000c5bd, 0x1000d3ff, 0x1000f85d
 */

void __thiscall GameClient::Weapon::Update(GameClient::Weapon *this, float a2)
{
  int v3; // eax
  GameClient::Robot *v4; // ecx
  GameClient::WorldObject *v5; // ecx
  GameClient::WorldObject *v6; // ecx
  GameClient::WorldObject *v7; // ecx
  int v8; // eax
  bool v9; // [esp+8h] [ebp-4h]
  bool v10; // [esp+8h] [ebp-4h]

  v3 = *((_DWORD *)this + 186);
  if ( v3 == 1 )
  {
    if ( *((_DWORD *)this + 67)
      || (v4 = (GameClient::Robot *)*((_DWORD *)this + 37)) != 0 && GameClient::Robot::CanUseWeapon(v4) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 124))(this) )
      {
        v5 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
        v9 = 0;
        if ( v5 && GameClient::WorldObject::IsLocal(v5) )
          v9 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 37) + 20) + 292) == *(_DWORD *)(*((_DWORD *)this + 37) + 12);
        GameClient::Weapon::AutoShoot(this, v9);
      }
    }
    else
    {
      (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 156))(this);
    }
    v6 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
    if ( v6
      && GameClient::WorldObject::IsLocal(v6)
      && (double)*(int *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2128) > *((float *)this + 47) )
    {
LABEL_23:
      (*(void (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 156))(this);
    }
  }
  else if ( v3 == 3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(GameClient::Weapon *))(*(_DWORD *)this + 124))(this) )
    {
      v7 = (GameClient::WorldObject *)*((_DWORD *)this + 37);
      v10 = 0;
      if ( v7 && GameClient::WorldObject::IsLocal(v7) )
        v10 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 37) + 20) + 292) == *(_DWORD *)(*((_DWORD *)this + 37) + 12);
      GameClient::Weapon::AutoShoot(this, v10);
    }
    v8 = 160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2);
    if ( *((_DWORD *)this + 189) >= *(_DWORD *)(v8 + 2132) || (double)*(int *)(v8 + 2128) > *((float *)this + 47) )
      goto LABEL_23;
  }
  GameClient::Weapon::updateTimeCount(this);
  GameClient::Weapon::computeShootOffsetRecover(this);
  GameClient::Equip::Update(this, a2);
}
