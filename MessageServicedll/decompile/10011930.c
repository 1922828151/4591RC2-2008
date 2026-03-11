/*
 * func-name: ?handle_read_seqeuence_stream@Channel_Manager@Message@Outpop@@UAEXAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@@Z
 * func-address: 0x10011930
 * callers: none
 * callees: 0x10022a10
 */

int __thiscall Outpop::Message::Channel_Manager::handle_read_seqeuence_stream(void *this, _DWORD *a2)
{
  _DWORD v4[5]; // [esp+14h] [ebp-20h] BYREF
  int v5; // [esp+30h] [ebp-4h]

  memset(&v4[1], 0, 12);
  v5 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)*a2 + 48))(*a2, v4, v4, v4);
  (*(void (__thiscall **)(void *, _DWORD *, _DWORD *))(*(_DWORD *)this + 4))(this, v4, a2);
  v5 = -1;
  return sub_10022A10();
}
