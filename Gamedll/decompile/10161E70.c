/*
 * func-name: sub_10161E70
 * func-address: 0x10161e70
 * callers: 0x10013232
 * callees: 0x1000a3a8, 0x10015d7f, 0x102c9d98
 */

char __thiscall sub_10161E70(_DWORD *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  _DWORD *v6; // eax
  EventAttemper *v7; // eax
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  _DWORD *v10; // eax
  EventAttemper *v11; // eax
  _DWORD *v12; // eax
  EventAttemper *v13; // eax
  _DWORD *v14; // eax
  EventAttemper *v15; // eax
  _DWORD *v16; // eax
  EventAttemper *v17; // eax
  _DWORD *v18; // eax
  EventAttemper *v19; // eax
  _DWORD *v20; // eax
  EventAttemper *v21; // eax
  _DWORD *v22; // eax
  EventAttemper *v23; // eax
  _DWORD *v24; // eax
  EventAttemper *v25; // eax
  _DWORD *v26; // eax
  EventAttemper *v27; // eax
  GameClient::RobotManager *v28; // eax

  v2 = operator new(4u);
  if ( v2 )
    *v2 = &GameClient::GS_Object_Attach_Object_Observer::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(19, 5001);
  this[12] = EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::GS_Object_Detach_Object_Observer::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(19, 5002);
  this[13] = EventAttemper::AddObserver(v5);
  v6 = operator new(4u);
  if ( v6 )
    *v6 = &GameClient::GS_Object_Attach_Object_Observer::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(19, 5003);
  this[12] = EventAttemper::AddObserver(v7);
  v8 = operator new(4u);
  if ( v8 )
    *v8 = &GameClient::GS_Object_Detach_Object_Observer::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(19, 5004);
  this[13] = EventAttemper::AddObserver(v9);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GameClient::GS_Object_Aura_ObjectObserver::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(19, 5006);
  EventAttemper::AddObserver(v11);
  v12 = operator new(4u);
  if ( v12 )
    *v12 = &GameClient::GS_Object_Aura_ObjectObserver::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(19, 5007);
  EventAttemper::AddObserver(v13);
  v14 = operator new(4u);
  if ( v14 )
    *v14 = &GameClient::GS_Object_Aura_ObjectObserver::`vftable';
  v15 = (EventAttemper *)EventAttemper::Instance(19, 5008);
  EventAttemper::AddObserver(v15);
  v16 = operator new(4u);
  if ( v16 )
    *v16 = &GameClient::GS_Object_Armor_ObjectObserver::`vftable';
  v17 = (EventAttemper *)EventAttemper::Instance(19, 5005);
  EventAttemper::AddObserver(v17);
  v18 = operator new(4u);
  if ( v18 )
    *v18 = &GameClient::GS_Object_Lock_ObjectObserver::`vftable';
  v19 = (EventAttemper *)EventAttemper::Instance(19, 5009);
  EventAttemper::AddObserver(v19);
  v20 = operator new(4u);
  if ( v20 )
    *v20 = &GameClient::GS_Object_Skill_ObjectObserver::`vftable';
  v21 = (EventAttemper *)EventAttemper::Instance(19, 5010);
  EventAttemper::AddObserver(v21);
  v22 = operator new(4u);
  if ( v22 )
    *v22 = &GameClient::GS_Object_Skill_ObjectObserver::`vftable';
  v23 = (EventAttemper *)EventAttemper::Instance(19, 5011);
  EventAttemper::AddObserver(v23);
  v24 = operator new(4u);
  if ( v24 )
    *v24 = &GameClient::GS_Object_Skill_ObjectObserver::`vftable';
  v25 = (EventAttemper *)EventAttemper::Instance(19, 5012);
  EventAttemper::AddObserver(v25);
  v26 = operator new(4u);
  if ( v26 )
    *v26 = &GameClient::GS_Object_Aura_ObjectObserver::`vftable';
  v27 = (EventAttemper *)EventAttemper::Instance(19, 5131);
  EventAttemper::AddObserver(v27);
  v28 = GameClient::RobotManager::Instance();
  GameClient::RobotManager::Initialize(v28);
  return 1;
}
