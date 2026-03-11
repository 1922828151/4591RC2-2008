/*
 * func-name: ?AnswerInviteRequest@GroupManager@GameClient@@QAEXPAVLocalCharacter@2@_N@Z_0
 * func-address: 0x101f8a90
 * callers: 0x10016194
 * callees: 0x10003e45, 0x1001116c, 0x100168ba
 */

void __thiscall GameClient::GroupManager::AnswerInviteRequest(
        GameClient::GroupManager *this,
        struct GameClient::LocalCharacter *a2,
        bool a3)
{
  int v4; // ebx
  void *v5; // esi
  void *v6; // ebp
  Outpop::Utility::Ref_Object *v7; // ebp
  Outpop::Utility::Ref_Object *v8; // eax
  Outpop::Utility::Ref_Object *v9; // esi
  unsigned __int16 type; // ax
  unsigned int token; // eax
  _DWORD v12[2]; // [esp+14h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v13; // [esp+1Ch] [ebp-18h]
  int v14; // [esp+20h] [ebp-14h] BYREF
  void *v15; // [esp+24h] [ebp-10h]
  int v16; // [esp+30h] [ebp-4h]

  v12[0] = *((_DWORD *)a2 + 1);
  v12[1] = (char *)this + 84;
  sub_100168BA((int)&v14, (int)v12);
  v4 = v14;
  v5 = (void *)*((_DWORD *)this + 23);
  if ( !v14 || (GameClient::GroupManager *)v14 != (GameClient::GroupManager *)((char *)this + 88) )
    _invalid_parameter_noinfo();
  v6 = v15;
  if ( v15 != v5 )
  {
    if ( !v4 )
      _invalid_parameter_noinfo();
    if ( v6 == *(void **)(v4 + 4) )
      _invalid_parameter_noinfo();
    v7 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v6 + 3);
    v12[0] = v7;
    if ( v7 )
      Outpop::Utility::Ref_Object::addref(v7);
    v16 = 0;
    v8 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
    v9 = v8;
    v13 = v8;
    LOBYTE(v16) = 1;
    if ( v8 )
    {
      Outpop::Message::Message::Message(v8, 1, 1, 2, 0, 128);
      *(_DWORD *)v9 = &Outpop::Message::Message::`vftable';
    }
    else
    {
      v9 = 0;
    }
    LOBYTE(v16) = 0;
    v13 = v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    LOBYTE(v16) = 2;
    Outpop::Message::Message::set_result(v9, a3 ? 0 : 21105);
    Outpop::Message::Message::set_protocol_catalog(v9, 0x15u);
    type = Outpop::Message::Message::get_type(v7);
    Outpop::Message::Message::set_protocol_type(v9, type);
    token = Outpop::Message::Message::get_token(v7);
    Outpop::Message::Message::set_token(v9, token);
    if ( v9 )
      Outpop::Utility::Ref_Object::addref(v9);
    GameClient::GroupManager::SendMessageA((int)a2, (int)v9);
    sub_10003E45((int)&v14, v4, v15);
    LOBYTE(v16) = 0;
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    v16 = -1;
    if ( v7 )
      Outpop::Utility::Ref_Object::release(v7);
  }
}
