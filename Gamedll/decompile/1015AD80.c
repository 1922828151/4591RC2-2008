/*
 * func-name: ?TakeOff@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x1015ad80
 * callers: 0x10005533
 * callees: 0x10003f2b, 0x10006a19, 0x100081c5, 0x10012166
 */

void __thiscall GameClient::Equip::TakeOff(GameClient::AEquip **this)
{
  double v2; // st7
  float v3; // [esp+Ch] [ebp-10h]
  float v4; // [esp+10h] [ebp-Ch]

  (*((void (__thiscall **)(GameClient::AEquip **))*this + 39))(this);
  GameClient::Equip::ChangeShowState((GameClient::Equip *)this, 0);
  v2 = 1.0;
  if ( GameClient::WorldObject::IsLocal((GameClient::WorldObject *)this) )
  {
    GameClient::AEquip::PlayAnimationFPV(this[45], *((_DWORD *)this[45] + 553), 0.2, 1.0, 1.0, 1);
    if ( this[159] )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this[159] + 36))(0, 0.75);
    v2 = 1.0;
  }
  v4 = v2;
  v3 = v2;
  GameClient::AEquip::PlayAnimation(this[45], *((_DWORD *)this[45] + 548), 0.2, v3, v4, 1);
}
