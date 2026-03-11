/*
 * func-name: ?TakeUp@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x1015ae20
 * callers: 0x1000f380
 * callees: 0x10003f2b, 0x10006a19, 0x100081c5, 0x10012166
 */

void __thiscall GameClient::Equip::TakeUp(GameClient::AEquip **this)
{
  double v2; // st7
  float v3; // [esp+Ch] [ebp-10h]
  float v4; // [esp+10h] [ebp-Ch]

  GameClient::Equip::ChangeShowState((GameClient::Equip *)this, 1);
  v2 = 1.0;
  if ( GameClient::WorldObject::IsLocal((GameClient::WorldObject *)this) )
  {
    GameClient::AEquip::PlayAnimationFPV(this[45], *((_DWORD *)this[45] + 554), 0.2, 1.0, 1.0, 1);
    if ( this[179] )
      (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this[179] + 36))(0, 0.75);
    v2 = 1.0;
  }
  v4 = v2;
  v3 = v2;
  GameClient::AEquip::PlayAnimation(this[45], *((_DWORD *)this[45] + 549), 0.2, v3, v4, 1);
}
