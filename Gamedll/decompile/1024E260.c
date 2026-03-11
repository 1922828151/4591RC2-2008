/*
 * func-name: sub_1024E260
 * func-address: 0x1024e260
 * callers: 0x10015c67
 * callees: none
 */

bool __stdcall sub_1024E260(int *a1, int a2)
{
  int v3; // ebp
  int v5; // ebp
  int v6; // edi
  int v7; // ebx
  int v8; // [esp+14h] [ebp+4h]
  int v9; // [esp+14h] [ebp+4h]

  v3 = *a1;
  v8 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(*(_DWORD *)a2 + 20));
  if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(v3 + 20)) < v8 )
    return 0;
  v5 = *a1;
  v9 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(*(_DWORD *)a2 + 20));
  if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(v5 + 20)) > v9 )
    return 1;
  v6 = *a1;
  v7 = Outpop::Utility::Time_Value::usec((Outpop::Utility::Time_Value *)(*(_DWORD *)a2 + 20));
  return Outpop::Utility::Time_Value::usec((Outpop::Utility::Time_Value *)(v6 + 20)) > v7;
}
