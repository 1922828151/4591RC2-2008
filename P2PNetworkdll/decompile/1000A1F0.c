/*
 * func-name: sub_1000A1F0
 * func-address: 0x1000a1f0
 * callers: 0x1000a080, 0x1000a270
 * callees: none
 */

bool __usercall sub_1000A1F0@<al>(int a1@<eax>, int *a2@<ecx>)
{
  int v4; // ebp
  int v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // [esp+10h] [ebp-4h]
  int v10; // [esp+10h] [ebp-4h]

  v4 = *a2;
  v9 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(*(_DWORD *)a1 + 12));
  if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(v4 + 12)) < v9 )
    return 0;
  v6 = *a2;
  v10 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(*(_DWORD *)a1 + 12));
  if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(v6 + 12)) > v10 )
    return 1;
  v7 = *a2;
  v8 = Outpop::Utility::Time_Value::usec((Outpop::Utility::Time_Value *)(*(_DWORD *)a1 + 12));
  return Outpop::Utility::Time_Value::usec((Outpop::Utility::Time_Value *)(v7 + 12)) > v8;
}
