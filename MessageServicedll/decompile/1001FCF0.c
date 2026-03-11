/*
 * func-name: ?get_message_handler@Handler_Manager@Message@Outpop@@QAEPAVMessage_Handler@23@EG@Z
 * func-address: 0x1001fcf0
 * callers: 0x100248a0, 0x10024cc0, 0x100253f0, 0x10025e70
 * callees: 0x10029110
 */

struct Outpop::Message::Message_Handler *__thiscall Outpop::Message::Handler_Manager::get_message_handler(
        Outpop::Message::Handler_Manager *this,
        unsigned __int8 a2,
        unsigned __int16 a3)
{
  Outpop::Message::Handler_Manager *v4; // edi
  int v5; // ebx
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  Outpop::Message::Handler_Manager *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  v7 = a3 + (a2 << 16);
  sub_10029110(&v8, &v7);
  v4 = v8;
  v5 = *((_DWORD *)this + 3);
  if ( !v8 || v8 != (Outpop::Message::Handler_Manager *)((char *)this + 8) )
    invalid_parameter_noinfo();
  if ( v9 == v5 )
    return (struct Outpop::Message::Message_Handler *)*((_DWORD *)this + 14);
  if ( !v4 )
    invalid_parameter_noinfo();
  if ( v9 == *((_DWORD *)v4 + 1) )
    invalid_parameter_noinfo();
  return *(struct Outpop::Message::Message_Handler **)(v9 + 20);
}
