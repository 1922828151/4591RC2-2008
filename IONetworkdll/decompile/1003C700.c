/*
 * func-name: ??1Sequence_Container@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x1003c700
 * callers: 0x10022aa0, 0x1002cbf0, 0x1002cfb0, 0x10042140, 0x10042a80, 0x10042cd0
 * callees: 0x10014a70
 */

void __thiscall Outpop::IONetwork::Sequence_Container::~Sequence_Container(Outpop::IONetwork::Sequence_Container *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 42);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 41);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 40);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  sub_10014A70((_DWORD *)this + 30);
  sub_10014A70((_DWORD *)this + 20);
  sub_10014A70((_DWORD *)this + 10);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::Sequence_Container *)((char *)this + 4));
}
