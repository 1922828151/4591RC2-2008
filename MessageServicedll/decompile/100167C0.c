/*
 * func-name: sub_100167C0
 * func-address: 0x100167c0
 * callers: 0x10010a20, 0x100133b0
 * callees: 0x10015010, 0x100166e0, 0x100295c0
 */

char __usercall sub_100167C0@<al>(int a1@<ecx>, int a2@<edi>)
{
  void *v3; // eax
  Outpop::Utility::Ref_Object *v4; // eax
  int v5; // eax
  int v6; // eax
  Outpop::Utility::Ref_Object *v8; // [esp+1Ch] [ebp-24h] BYREF
  void *v9; // [esp+20h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v10; // [esp+24h] [ebp-1Ch] BYREF
  _BYTE v11[12]; // [esp+28h] [ebp-18h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  Outpop::Message::Connector_Manager::find_sconnector(*(_DWORD **)(a2 + 36), &v8, a1);
  v12 = 0;
  if ( v8 && *((_BYTE *)v8 + 104) == 1 )
  {
    v3 = operator new(0x10u);
    v9 = v3;
    LOBYTE(v12) = 1;
    if ( v3 )
      v4 = sub_100166E0((Outpop::Utility::Timer_Handler *)v3, a2, a1);
    else
      v4 = 0;
    LOBYTE(v12) = 0;
    v10 = v4;
    if ( v4 )
      Outpop::Utility::Ref_Object::addref(v4);
    v9 = 0;
    LOBYTE(v12) = 3;
    v5 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v11, *((_DWORD *)v8 + 27), 0);
    LOBYTE(v12) = 4;
    v6 = Outpop::Utility::Timer_Queue::instance(&v10, v5, &v9, 0, 0);
    Outpop::Utility::Timer_Queue::schedule_timer(v6);
    LOBYTE(v12) = 3;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v11);
    LOBYTE(v12) = 2;
    if ( v9 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v9);
    LOBYTE(v12) = 0;
    if ( v10 )
      Outpop::Utility::Ref_Object::release(v10);
    v12 = -1;
    if ( v8 )
      Outpop::Utility::Ref_Object::release(v8);
    return 1;
  }
  else
  {
    v12 = -1;
    if ( v8 )
      Outpop::Utility::Ref_Object::release(v8);
    return 0;
  }
}
