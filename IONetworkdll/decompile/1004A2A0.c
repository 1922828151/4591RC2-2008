/*
 * func-name: sub_1004A2A0
 * func-address: 0x1004a2a0
 * callers: 0x10034730, 0x10048940
 * callees: none
 */

int __stdcall sub_1004A2A0(int a1, Outpop::Utility::Ref_Object *a2)
{
  _DWORD *v2; // eax
  _BYTE v4[8]; // [esp+10h] [ebp-14h] BYREF
  int v5; // [esp+20h] [ebp-4h]

  v5 = 0;
  *(_DWORD *)a1 = 0;
  *(_WORD *)(a1 + 4) = 0;
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a1 + 8));
  LOBYTE(v5) = 2;
  if ( *(_DWORD *)a1 )
    Outpop::Utility::Ref_Object::release(*(Outpop::Utility::Ref_Object **)a1);
  *(_DWORD *)a1 = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  v2 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v4);
  LOBYTE(v5) = 3;
  *(_DWORD *)(a1 + 8) = *v2;
  *(_DWORD *)(a1 + 12) = v2[1];
  LOBYTE(v5) = 2;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v4);
  v5 = -1;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
