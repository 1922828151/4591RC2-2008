/*
 * func-name: ?interal_send_message@Peer@P2P@Outpop@@AAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10004f40
 * callers: 0x10002c10
 * callees: 0x10007d00
 */

void __thiscall Outpop::P2P::Peer::interal_send_message(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  sub_10007D00(&v9, a2);
  v4 = this[17];
  v5 = this + 16;
  v6 = v9;
  if ( !v9 || v9 != v5 )
    invalid_parameter_noinfo();
  v7 = v10;
  if ( v10 != v4 )
  {
    if ( !v6 )
      invalid_parameter_noinfo();
    if ( v7 == v6[1] )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(v7 + 36);
    if ( *(_DWORD *)(v8 + 8) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v8 + 8) + 20))(*(_DWORD *)(v8 + 8), a3);
  }
}
