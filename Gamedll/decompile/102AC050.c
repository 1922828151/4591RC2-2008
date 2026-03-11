/*
 * func-name: sub_102AC050
 * func-address: 0x102ac050
 * callers: 0x1001642d
 * callees: none
 */

void __thiscall sub_102AC050(_DWORD *this, Outpop::Utility::Ref_Object *a2)
{
  bool v3; // zf
  int v4; // edi
  Outpop::Utility::Ref_Object *v5; // ecx
  int v6; // eax
  int v7; // [esp+8h] [ebp-30h]
  Outpop::Utility::Ref_Object *v8; // [esp+1Ch] [ebp-1Ch] BYREF
  Outpop::Utility::Lock *v9; // [esp+20h] [ebp-18h]
  _BYTE v10[8]; // [esp+24h] [ebp-14h] BYREF
  int v11; // [esp+34h] [ebp-4h]

  v9 = (Outpop::Utility::Lock *)(this + 4);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 4));
  v3 = this[1] == -1;
  v11 = 0;
  if ( v3 )
  {
    this[1] = a2;
    v8 = 0;
    v7 = this[2];
    LOBYTE(v11) = 1;
    v4 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v10, v7, 0);
    v5 = (Outpop::Utility::Ref_Object *)this[3];
    LOBYTE(v11) = 2;
    a2 = v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    LOBYTE(v11) = 3;
    v6 = Outpop::Utility::Timer_Queue::instance(&a2, v4, &v8, 0, 0);
    Outpop::Utility::Timer_Queue::schedule_timer(v6);
    LOBYTE(v11) = 2;
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
    LOBYTE(v11) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v10);
    LOBYTE(v11) = 0;
    if ( v8 )
      Outpop::Utility::Ref_Object::release(v8);
  }
  v11 = -1;
  Outpop::Utility::Lock::unlock(v9);
}
