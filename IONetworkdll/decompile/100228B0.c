/*
 * func-name: sub_100228B0
 * func-address: 0x100228b0
 * callers: 0x10023520
 * callees: none
 */

int __thiscall sub_100228B0(Outpop::Utility::Ref_Object **this, int a2, char a3, __int16 a4, __int16 a5)
{
  Outpop::Utility::Ref_Object *v5; // ecx
  _DWORD *v6; // eax
  _BYTE v8[8]; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  *(_WORD *)a2 = a5;
  v5 = *this;
  *(_DWORD *)(a2 + 4) = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v9 = 0;
  *(_WORD *)(a2 + 8) = a4;
  *(_BYTE *)(a2 + 10) = a3;
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a2 + 12));
  LOBYTE(v9) = 1;
  v6 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v8);
  LOBYTE(v9) = 2;
  *(_DWORD *)(a2 + 12) = *v6;
  *(_DWORD *)(a2 + 16) = v6[1];
  LOBYTE(v9) = 1;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v8);
  return a2;
}
