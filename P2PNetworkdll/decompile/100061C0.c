/*
 * func-name: ?has_peer@Peer@P2P@Outpop@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100061c0
 * callers: none
 * callees: 0x10007d00
 */

bool __thiscall Outpop::P2P::Peer::has_peer(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // esi
  _DWORD v6[2]; // [esp+8h] [ebp-8h] BYREF

  sub_10007D00(v6, a2);
  v3 = this + 16;
  v4 = this[17];
  if ( !v6[0] || (_DWORD *)v6[0] != v3 )
    invalid_parameter_noinfo();
  return v6[1] != v4;
}
