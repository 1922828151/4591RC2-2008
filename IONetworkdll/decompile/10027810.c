/*
 * func-name: ?PostAccept@Dgram_Acceptor@IONetwork@Outpop@@AAEHH@Z
 * func-address: 0x10027810
 * callers: 0x10026420, 0x10027c40, 0x10027c50, 0x1002d230
 * callees: 0x1002c0f0
 */

int __thiscall Outpop::IONetwork::Dgram_Acceptor::PostAccept(Outpop::IONetwork::Dgram_Acceptor *this, DWORD a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int v4; // ebp
  Outpop::Utility::Binary_Stream *v5; // edi
  Outpop::Utility::Thread_Mutex *v7; // ebp
  bool v8; // al
  int v9; // [esp-14h] [ebp-44h]
  Outpop::IONetwork::Dgram_Acceptor *v10; // [esp-8h] [ebp-38h] BYREF
  int v11; // [esp-4h] [ebp-34h]
  _DWORD v12[3]; // [esp+14h] [ebp-1Ch] BYREF
  int v13; // [esp+20h] [ebp-10h]
  int v14; // [esp+2Ch] [ebp-4h]

  v3 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184);
  Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184));
  v4 = *((_DWORD *)this + 65);
  Outpop::Utility::Thread_Mutex::release(v3);
  v5 = (Outpop::Utility::Binary_Stream *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  v12[0] = v5;
  v14 = 0;
  if ( v5 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream(v5, a2);
    *(_DWORD *)v5 = &Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v5 = 0;
  }
  v14 = -1;
  v12[0] = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v14 = 1;
  if ( InterlockedExchange((volatile LONG *)this + 60, *((_DWORD *)this + 60)) > v4 + *((_DWORD *)this + 27) )
  {
    v14 = -1;
LABEL_8:
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    return 0;
  }
  v7 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 132);
  v12[2] = (char *)this + 132;
  v8 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 132));
  v13 = v8 - 1;
  LOBYTE(v14) = 2;
  if ( v8 )
  {
    v11 = 0;
    v12[1] = &v10;
    v10 = this;
    Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v14) = 3;
    v9 = *((_DWORD *)this + 59);
    LOBYTE(v14) = 2;
    if ( sub_1002C0F0(v9, v12, a2, v10, v11) != -1 )
    {
      InterlockedIncrement((volatile LONG *)this + 60);
      LOBYTE(v14) = 1;
      v13 = -1;
      Outpop::Utility::Thread_Mutex::release(v7);
      v14 = -1;
      goto LABEL_8;
    }
    LOBYTE(v14) = 1;
    v13 = -1;
    Outpop::Utility::Thread_Mutex::release(v7);
    v14 = -1;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    return -1;
  }
  else
  {
    v14 = -1;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    return -1;
  }
}
