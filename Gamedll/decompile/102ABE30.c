/*
 * func-name: sub_102ABE30
 * func-address: 0x102abe30
 * callers: 0x100034ae
 * callees: 0x10001181, 0x1000e56b, 0x10017deb
 */

void __thiscall sub_102ABE30(_DWORD *this, Outpop::Utility::Ref_Object *a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  Outpop::Utility::Ref_Object *v6; // ecx
  int v7; // eax
  int v8; // [esp+0h] [ebp-54h]
  LONG v9; // [esp+4h] [ebp-50h]
  int v10; // [esp+8h] [ebp-4Ch]
  int v11; // [esp+1Ch] [ebp-38h] BYREF
  int v12; // [esp+20h] [ebp-34h] BYREF
  Outpop::Utility::Ref_Object *v13; // [esp+24h] [ebp-30h] BYREF
  _BYTE v14[8]; // [esp+28h] [ebp-2Ch] BYREF
  _BYTE v15[8]; // [esp+30h] [ebp-24h] BYREF
  _BYTE v16[8]; // [esp+38h] [ebp-1Ch] BYREF
  _BYTE v17[8]; // [esp+40h] [ebp-14h] BYREF
  int v18; // [esp+50h] [ebp-4h]

  v12 = 0;
  v11 = 0;
  sub_10001181((int)&v12);
  sub_10001181((int)&v11);
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v15, v12, v11);
  v18 = 0;
  v3 = Outpop::Utility::Time_Value::gettimeofday(v16);
  LOBYTE(v18) = 1;
  Outpop::Utility::operator-(v14, v3, v15);
  LOBYTE(v18) = 3;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v16);
  v4 = Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v14);
  sub_1000E56B(v4, v10);
  sub_10017DEB(v9);
  v13 = 0;
  v8 = this[2];
  LOBYTE(v18) = 4;
  v5 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v17, v8, 0);
  v6 = (Outpop::Utility::Ref_Object *)this[3];
  LOBYTE(v18) = 5;
  a2 = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  LOBYTE(v18) = 6;
  v7 = Outpop::Utility::Timer_Queue::instance(&a2, v5, &v13, 0, 0);
  Outpop::Utility::Timer_Queue::schedule_timer(v7);
  LOBYTE(v18) = 5;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  LOBYTE(v18) = 4;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v17);
  LOBYTE(v18) = 3;
  if ( v13 )
    Outpop::Utility::Ref_Object::release(v13);
  LOBYTE(v18) = 0;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v14);
  v18 = -1;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v15);
}
