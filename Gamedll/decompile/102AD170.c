/*
 * func-name: sub_102AD170
 * func-address: 0x102ad170
 * callers: 0x1000aea2
 * callees: 0x1000e40d, 0x10013a3e, 0x10013d18, 0x10015587, 0x10018be2, 0x10018e8f, 0x102c9d98
 */

Outpop::Utility::Dispatch_Thread *__thiscall sub_102AD170(Outpop::Utility::Dispatch_Thread **this)
{
  int v2; // eax
  Outpop::Utility::Dispatch_Thread *v3; // eax
  Outpop::Utility::Dispatch_Thread *v4; // eax
  Outpop::Utility::Dispatch_Thread *v5; // eax
  int v6; // eax
  Outpop::Utility::Dispatch_Thread *v7; // eax
  Outpop::Utility::Dispatch_Thread *v8; // edi
  Outpop::Utility::Logger *v9; // eax
  _DWORD *v10; // eax
  EventAttemper *v11; // eax
  _DWORD *v12; // eax
  EventAttemper *v13; // eax
  Outpop::Utility::Dispatch_Thread *result; // eax
  Outpop::Utility::Dispatch_Thread *v15; // [esp-14h] [ebp-54h]
  Outpop::Utility::Dispatch_Thread *v16; // [esp-4h] [ebp-44h]
  const char *v17; // [esp+0h] [ebp-40h]
  int v18; // [esp+0h] [ebp-40h]
  int v19; // [esp+0h] [ebp-40h]
  int v20; // [esp+0h] [ebp-40h]
  int v21; // [esp+0h] [ebp-40h]
  int v22; // [esp+0h] [ebp-40h]
  int v23; // [esp+4h] [ebp-3Ch]
  int v24; // [esp+4h] [ebp-3Ch]
  int v25; // [esp+4h] [ebp-3Ch]
  int v26; // [esp+4h] [ebp-3Ch]
  int v27; // [esp+4h] [ebp-3Ch]
  int v28; // [esp+8h] [ebp-38h]
  int v29; // [esp+Ch] [ebp-34h]
  _DWORD v30[2]; // [esp+10h] [ebp-30h] BYREF
  _DWORD v31[7]; // [esp+18h] [ebp-28h] BYREF
  int v32; // [esp+3Ch] [ebp-4h]

  v32 = 0;
  if ( operator new(0x44u) )
    v2 = sub_10015587((int)v17, v23);
  else
    v2 = 0;
  v32 = -1;
  this[2] = (Outpop::Utility::Dispatch_Thread *)v2;
  v3 = (Outpop::Utility::Dispatch_Thread *)operator new(4u);
  if ( v3 )
    *(_DWORD *)v3 = &GameDefaultRequestHandler::`vftable';
  else
    v3 = 0;
  this[3] = v3;
  v4 = (Outpop::Utility::Dispatch_Thread *)operator new(4u);
  if ( v4 )
    *(_DWORD *)v4 = &GameDefaultAckHandler::`vftable';
  else
    v4 = 0;
  this[4] = v4;
  v5 = (Outpop::Utility::Dispatch_Thread *)operator new(4u);
  if ( v5 )
    *(_DWORD *)v5 = &GameDefaultGroupAckHandler::`vftable';
  else
    v5 = 0;
  this[5] = v5;
  v30[0] = &GameClientConfigPaser::`vftable';
  v32 = 2;
  if ( operator new(4u) )
    v6 = sub_10018BE2();
  else
    v6 = 0;
  this[1] = (Outpop::Utility::Dispatch_Thread *)v6;
  v7 = (Outpop::Utility::Dispatch_Thread *)operator new(0xA4u);
  v8 = v7;
  v30[1] = v7;
  LOBYTE(v32) = 3;
  if ( v7 )
  {
    Outpop::Utility::Dispatch_Thread::Dispatch_Thread(v7);
    *(_DWORD *)v8 = &Outpop::Utility::Dispatch_Thread::`vftable';
  }
  else
  {
    v8 = 0;
  }
  LOBYTE(v32) = 1;
  *this = v8;
  v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
  Outpop::Utility::Logger::paser_config(v9, v17);
  std::string::string(v31, "..\\game_client_config.xml");
  v16 = *this;
  v15 = this[1];
  LOBYTE(v32) = 4;
  Outpop::Message::Message_Facade::init(v31, v30, v15, 0, 0, 1, v16);
  LOBYTE(v32) = 1;
  std::string::~string(v31);
  Outpop::Message::Message_Facade::set_defaule_type_handler(this[2], this[3], this[4], this[5], 1, *this);
  sub_10013D18(v18, v23);
  Outpop::Message::Message_Facade::run();
  sub_10013D18(v19, v24);
  sub_10018E8F(v20, v25);
  sub_1000E40D(v21, v26);
  sub_10013A3E(v22, v27, v28, v29);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GC_SynchLayer_Gameserver_Disconnect_Observer::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(9, 2022);
  this[36] = (Outpop::Utility::Dispatch_Thread *)EventAttemper::AddObserver(v11);
  v12 = operator new(4u);
  if ( v12 )
    *v12 = &GC_SynchLayer_GateServer_Disconnect_Observer::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(9, 2021);
  result = (Outpop::Utility::Dispatch_Thread *)EventAttemper::AddObserver(v13);
  this[37] = result;
  return result;
}
