/*
 * func-name: ?UpdateInput@Seat@GameClient@@UAEXXZ_0
 * func-address: 0x101b0bf0
 * callers: 0x10016518
 * callees: none
 */

void __thiscall GameClient::Seat::UpdateInput(GameClient::Seat *this)
{
  if ( *((_DWORD *)this + 24) )
  {
    if ( !*((_BYTE *)this + 346) )
      (*(void (__thiscall **)(_DWORD, GameClient::Seat *))(**((_DWORD **)this + 24) + 4))(*((_DWORD *)this + 24), this);
  }
}
