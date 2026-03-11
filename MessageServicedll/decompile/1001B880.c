/*
 * func-name: sub_1001B880
 * func-address: 0x1001b880
 * callers: 0x1000cd20
 * callees: 0x1000bfa0, 0x10019e50, 0x1001ae60, 0x1001ce80, 0x10027830, 0x100295c0
 */

_DWORD *__userpurge sub_1001B880@<eax>(int *a1@<ebx>, _DWORD *a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  LONG v4; // eax
  int v5; // ebp
  Outpop::Utility::Ref_Object *v6; // eax
  unsigned __int16 v7; // cx
  Outpop::Utility::Ref_Object *v8; // eax
  _DWORD *v9; // esi
  int v10; // ebp
  int v11; // eax
  int v12; // ebp
  Outpop::Utility::Ref_Object *v14[2]; // [esp+1Ch] [ebp-38h] BYREF
  Outpop::Utility::Ref_Object *v15[2]; // [esp+24h] [ebp-30h] BYREF
  int v16; // [esp+2Ch] [ebp-28h]
  _DWORD *v17; // [esp+30h] [ebp-24h]
  int v18; // [esp+34h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v19; // [esp+38h] [ebp-1Ch]
  _DWORD v20[3]; // [esp+3Ch] [ebp-18h] BYREF
  int v21; // [esp+50h] [ebp-4h]

  v16 = 0;
  v4 = InterlockedIncrement((volatile LONG *)(*(_DWORD *)(*a1 + 44) + 136));
  v5 = 1;
  if ( v4 != -1 )
    v5 = v4;
  v6 = *a4;
  v7 = *((_BYTE *)*a4 + 97) & 0xF;
  v15[1] = (Outpop::Utility::Ref_Object *)v5;
  if ( v7 )
    *(_DWORD *)(v7 + *((_DWORD *)v6 + 25)) = v5;
  v8 = (Outpop::Utility::Ref_Object *)operator new(0x6Cu);
  v15[0] = v8;
  v21 = 1;
  if ( v8 )
    v9 = sub_10019E50(a3, a4, v8, *a1);
  else
    v9 = 0;
  LOBYTE(v21) = 0;
  v17 = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
  v21 = 3;
  v15[0] = (Outpop::Utility::Ref_Object *)(a1 + 1);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(a1 + 1));
  v14[0] = (Outpop::Utility::Ref_Object *)v5;
  v14[1] = (Outpop::Utility::Ref_Object *)v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
  LOBYTE(v21) = 5;
  sub_1000BFA0(&v18, v14);
  LOBYTE(v21) = 6;
  sub_1001CE80(a1 + 23, v20, &v18);
  LOBYTE(v21) = 5;
  if ( v19 )
    Outpop::Utility::Ref_Object::release(v19);
  LOBYTE(v21) = 3;
  if ( v9 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v9);
  LOBYTE(v21) = 2;
  Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)(a1 + 1));
  if ( *(_BYTE *)(*(_DWORD *)(*a1 + 44) + 164) && *((_DWORD *)*a4 + 18) )
  {
    v15[0] = 0;
    LOBYTE(v21) = 9;
    v10 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)&v18, 0, *((_DWORD *)*a4 + 18));
    LOBYTE(v21) = 10;
    v14[0] = (Outpop::Utility::Ref_Object *)v9;
    if ( v9 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
    LOBYTE(v21) = 11;
    v11 = Outpop::Utility::Timer_Queue::instance(v14, v10, v15, 0, 0);
    v12 = Outpop::Utility::Timer_Queue::schedule_timer(v11);
    LOBYTE(v21) = 10;
    if ( v14[0] )
      Outpop::Utility::Ref_Object::release(v14[0]);
    LOBYTE(v21) = 9;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v18);
    LOBYTE(v21) = 2;
    if ( v15[0] )
      Outpop::Utility::Ref_Object::release(v15[0]);
    if ( v12 == -1 )
    {
      v15[0] = (Outpop::Utility::Ref_Object *)(a1 + 1);
      Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(a1 + 1));
      LOBYTE(v21) = 12;
      sub_10027830((int)(a1 + 23));
      LOBYTE(v21) = 2;
      Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)(a1 + 1));
    }
    v9[23] = v12;
  }
  sub_1001AE60(a3, (int)a1, (int)a4);
  Outpop::Utility::Event_Base::wait((Outpop::Utility::Event_Base *)(v9 + 24));
  *a2 = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v9);
  v16 = 1;
  LOBYTE(v21) = 0;
  if ( v9 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v9);
  return a2;
}
