/*
 * func-name: ?UpdateHUD@Weapon@GameClient@@UAEXXZ_0
 * func-address: 0x101956c0
 * callers: 0x1000d7ec
 * callees: none
 */

void __thiscall GameClient::Weapon::UpdateHUD(GameClient::Weapon *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 44);
  if ( v1 )
  {
    *(float *)(v1 + 8) = *((float *)this + 230);
    if ( (double)*(int *)(160 * *((_DWORD *)this + 185) + *((_DWORD *)this + 2) + 2128) > *((float *)this + 47) )
    {
      *(_BYTE *)(*((_DWORD *)this + 44) + 60) = 1;
      GameClient::Equip::UpdateHUD(this);
      return;
    }
    *(_BYTE *)(*((_DWORD *)this + 44) + 60) = 0;
  }
  GameClient::Equip::UpdateHUD(this);
}
