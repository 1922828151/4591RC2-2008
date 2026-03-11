/*
 * func-name: ?first_process@Accept_Bluider_Process@IONetwork@Outpop@@QAEHXZ
 * func-address: 0x1003edf0
 * callers: 0x10017730
 * callees: none
 */

int __thiscall Outpop::IONetwork::Accept_Bluider_Process::first_process(
        Outpop::IONetwork::Accept_Bluider_Process *this)
{
  Outpop::Utility::Binary_Stream *v2; // eax
  Outpop::Utility::Ref_Object *v3; // esi
  int *v4; // ecx
  int v5; // eax
  Outpop::Utility::Ref_Object *v7; // [esp-Ch] [ebp-30h] BYREF
  int v8; // [esp-8h] [ebp-2Ch]
  int v9; // [esp-4h] [ebp-28h]
  Outpop::Utility::Binary_Stream *v10; // [esp+10h] [ebp-14h]
  Outpop::Utility::Ref_Object **v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+20h] [ebp-4h]

  v2 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v3 = v2;
  v10 = v2;
  v12 = 0;
  if ( v2 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v2, 1024);
    *(_DWORD *)v3 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v3 = 0;
  }
  v12 = -1;
  v10 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  v12 = 1;
  v9 = 0;
  v8 = 8;
  v11 = &v7;
  v7 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  LOBYTE(v12) = 2;
  v4 = (int *)*((_DWORD *)this + 1);
  v5 = *v4;
  LOBYTE(v12) = 1;
  if ( (*(int (__thiscall **)(int *, Outpop::Utility::Ref_Object *, int, int))(v5 + 4))(v4, v7, v8, v9) == -1 )
  {
    v12 = -1;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    return -1;
  }
  else
  {
    v12 = -1;
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    return 0;
  }
}
