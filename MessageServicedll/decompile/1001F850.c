/*
 * func-name: ?dispatch_message_direct@Handler_Manager@Message@Outpop@@QAEXEGAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x1001f850
 * callers: none
 * callees: 0x10029110
 */

void __thiscall Outpop::Message::Handler_Manager::dispatch_message_direct(
        int this,
        unsigned __int8 a2,
        unsigned __int16 a3,
        int a4)
{
  int v5; // edi
  int v6; // ebx
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v7 = a3 + (a2 << 16);
  sub_10029110(&v8, &v7);
  v5 = v8;
  v6 = *(_DWORD *)(this + 12);
  if ( !v8 || v8 != this + 8 )
    invalid_parameter_noinfo();
  if ( v9 == v6 )
  {
    if ( *(_DWORD *)(this + 56) )
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 56) + 4))(*(_DWORD *)(this + 56), a4);
  }
  else
  {
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v9 == *(_DWORD *)(v5 + 4) )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v9 + 20) + 4))(*(_DWORD *)(v9 + 20), a4);
  }
}
