/*
 * func-name: sub_100073A0
 * func-address: 0x100073a0
 * callers: 0x10003ce0
 * callees: 0x10008190, 0x10008200, 0x10008d00, 0x10009940
 */

int __thiscall sub_100073A0(int this)
{
  int *v2; // esi
  int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // [esp+14h] [ebp-20h] BYREF
  _DWORD v10[2]; // [esp+18h] [ebp-1Ch] BYREF
  _DWORD v11[2]; // [esp+20h] [ebp-14h] BYREF
  int v12; // [esp+30h] [ebp-4h]

  v9 = 0;
  v12 = 0;
  v2 = *(int **)(this + 4);
  if ( !v2 || !((*(_DWORD *)(this + 8) - (int)v2) >> 2) )
    return Outpop::IONetwork::WIN32_IoCompletionPort::handle_events((Outpop::IONetwork::WIN32_IoCompletionPort *)(this + 20));
  if ( (unsigned int)v2 > *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  if ( (unsigned int)v2 >= *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  v3 = *v2;
  v9 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v3);
  v4 = *(_DWORD *)(this + 8);
  if ( *(_DWORD *)(this + 4) > v4 )
    invalid_parameter_noinfo();
  v5 = *(_DWORD *)(this + 4);
  if ( v5 > *(_DWORD *)(this + 8) )
    invalid_parameter_noinfo();
  sub_10009940(*(unsigned __int8 *)(this + 16), this, v5, this, v4);
  sub_10008D00(this);
  if ( !v3 )
    return Outpop::IONetwork::WIN32_IoCompletionPort::handle_events((Outpop::IONetwork::WIN32_IoCompletionPort *)(this + 20));
  Outpop::Utility::Time_Value::gettimeofday(v10);
  LOBYTE(v12) = 1;
  if ( Outpop::Utility::operator<=(v3 + 12, v10) )
  {
    if ( *(_BYTE *)(v3 + 24) == 1 )
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD))(**(_DWORD **)(v3 + 8) + 4))(
        *(_DWORD *)(v3 + 8),
        v10,
        v3 + 12,
        v3 + 20,
        *(_DWORD *)(v3 + 28));
    sub_10008190(this + 64);
    LOBYTE(v12) = 0;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v10);
    v12 = -1;
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v3);
    return 0;
  }
  else
  {
    Outpop::Utility::operator-(v11, v3 + 12, v10);
    LOBYTE(v12) = 2;
    v7 = Outpop::Utility::Time_Value::msec((Outpop::Utility::Time_Value *)v11);
    v8 = Outpop::IONetwork::WIN32_IoCompletionPort::handle_events(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(this + 20),
           v7);
    if ( v8 == 258 )
    {
      if ( *(_BYTE *)(v3 + 24) == 1 )
        (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, _DWORD))(**(_DWORD **)(v3 + 8) + 4))(
          *(_DWORD *)(v3 + 8),
          v10,
          v3 + 12,
          v3 + 20,
          *(_DWORD *)(v3 + 28));
      sub_10008190(this + 64);
    }
    else
    {
      sub_10008200(&v9);
    }
    LOBYTE(v12) = 1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v11);
    LOBYTE(v12) = 0;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v10);
    v12 = -1;
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v3);
    return v8;
  }
}
