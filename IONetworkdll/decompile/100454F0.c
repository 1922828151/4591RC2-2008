/*
 * func-name: ?handle_time_out@P2P_Channel@IONetwork@Outpop@@UAEXABVTime_Value@Utility@3@0AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@J@Z
 * func-address: 0x100454f0
 * callers: none
 * callees: 0x100487c0, 0x1004e98e
 */

int __thiscall Outpop::IONetwork::P2P_Channel::handle_time_out(
        Outpop::Utility::Ref_Object *this,
        int a2,
        int a3,
        Outpop::Utility::Ref_Object **a4,
        int a5)
{
  int v6; // esi
  int v7; // esi
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  bool v10; // zf
  int result; // eax
  _DWORD v12[7]; // [esp-4h] [ebp-28h] BYREF
  int v13; // [esp+20h] [ebp-4h]

  v6 = operator new(56);
  v12[5] = v6;
  v13 = 0;
  if ( v6 )
  {
    v12[6] = v12;
    v12[0] = this;
    if ( this )
      Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v13) = 0;
    v7 = sub_100487C0(v6, v12[0]);
  }
  else
  {
    v7 = 0;
  }
  v13 = -1;
  v8 = *(Outpop::Utility::Ref_Object **)(v7 + 48);
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  v9 = *a4;
  v10 = *a4 == 0;
  *(_DWORD *)(v7 + 48) = *a4;
  if ( !v10 )
    Outpop::Utility::Ref_Object::addref(v9);
  *(_DWORD *)(v7 + 52) = a5;
  result = *((_DWORD *)this + 45);
  if ( result )
  {
    result = PostQueuedCompletionStatus(**(HANDLE **)(result + 108), *(_DWORD *)(v7 + 24), 0, (LPOVERLAPPED)(v7 + 4));
    if ( !result )
      return (**(int (__thiscall ***)(int, int))v7)(v7, 1);
  }
  return result;
}
