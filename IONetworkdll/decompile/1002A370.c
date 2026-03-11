/*
 * func-name: ?handle_time_out@Dgram_Acceptor@IONetwork@Outpop@@UAEXABVTime_Value@Utility@3@0AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@J@Z
 * func-address: 0x1002a370
 * callers: none
 * callees: 0x1002b840, 0x1004e98e
 */

int __thiscall Outpop::IONetwork::Dgram_Acceptor::handle_time_out(
        int this,
        int a2,
        int a3,
        Outpop::Utility::Ref_Object **a4,
        int a5)
{
  struct _OVERLAPPED *v6; // esi
  int v7; // esi
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  bool v10; // zf
  DWORD v11; // eax
  int result; // eax
  LPOVERLAPPED v13[7]; // [esp-4h] [ebp-28h] BYREF
  int v14; // [esp+20h] [ebp-4h]

  v6 = (struct _OVERLAPPED *)operator new(56);
  v13[5] = v6;
  v14 = 0;
  if ( v6 )
  {
    v13[6] = (LPOVERLAPPED)v13;
    v13[0] = (LPOVERLAPPED)this;
    if ( this )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
    LOBYTE(v14) = 0;
    v7 = sub_1002B840(v6, v13[0]);
  }
  else
  {
    v7 = 0;
  }
  v14 = -1;
  v8 = *(Outpop::Utility::Ref_Object **)(v7 + 48);
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  v9 = *a4;
  v10 = *a4 == 0;
  *(_DWORD *)(v7 + 48) = *a4;
  if ( !v10 )
    Outpop::Utility::Ref_Object::addref(v9);
  v11 = *(_DWORD *)(v7 + 24);
  v13[0] = (LPOVERLAPPED)(v7 + 4);
  *(_DWORD *)(v7 + 52) = a5;
  result = PostQueuedCompletionStatus(**(HANDLE **)(this + 124), v11, 0, v13[0]);
  if ( !result )
    return (**(int (__thiscall ***)(int, int))v7)(v7, 1);
  return result;
}
