/*
 * func-name: ?UseSkill@Seat@GameClient@@QAEX_N@Z_0
 * func-address: 0x101b0c10
 * callers: 0x10001fbe
 * callees: none
 */

void __thiscall GameClient::Seat::UseSkill(GameClient::Seat *this, int a2)
{
  if ( *((_DWORD *)this + 87) )
    (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)this + 87) + 40))(*(_DWORD *)(*((_DWORD *)this + 87) + 20), a2);
}
