/*
 * func-name: ?Stop@Item@GameClient@@UAEXXZ_0
 * func-address: 0x10160fa0
 * callers: 0x10008319
 * callees: none
 */

void __thiscall GameClient::Item::Stop(GameClient::Item *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 194);
  if ( v2 != -1 )
  {
    (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + v2 + 192) + 48))(*((_DWORD *)this + v2 + 192));
    *((_DWORD *)this + 194) = -1;
  }
  GameClient::Equip::Stop(this);
}
