/*
 * func-name: ?SubmitLeadingSkill@Item@GameClient@@QAEXH_N@Z_0
 * func-address: 0x10161570
 * callers: 0x100053fd
 * callees: none
 */

void __thiscall GameClient::Item::SubmitLeadingSkill(GameClient::Item *this, int a2, int a3)
{
  if ( *((_DWORD *)this + a2 + 192) && ((_BYTE)a3 || *((_DWORD *)this + 194) != -1) )
    (*(void (__thiscall **)(_DWORD, GameClient::Item *, int))(**((_DWORD **)this + a2 + 192) + 40))(
      *((_DWORD *)this + a2 + 192),
      this,
      a3);
}
