/*
 * func-name: ?PostAccept@P2PUdpBuilder@IONetwork@Outpop@@AAEHH@Z
 * func-address: 0x1004b970
 * callers: 0x10042de0, 0x1004ab10, 0x1004c0c0, 0x1004c0d0, 0x1004ccb0
 * callees: 0x1004e0a0
 */

int __thiscall Outpop::IONetwork::P2PUdpBuilder::PostAccept(Outpop::IONetwork::P2PUdpBuilder *this, DWORD a2)
{
  Outpop::Utility::Thread_Mutex *v3; // edi
  int v4; // ebp
  volatile LONG *v5; // edi
  int v6; // edx
  int v7; // eax
  bool v8; // al
  int v10; // [esp-14h] [ebp-4Ch]
  Outpop::IONetwork::P2PUdpBuilder *v11; // [esp-8h] [ebp-40h] BYREF
  int v12; // [esp-4h] [ebp-3Ch]
  volatile LONG *v13; // [esp+18h] [ebp-20h] BYREF
  volatile LONG *lpAddend; // [esp+1Ch] [ebp-1Ch]
  Outpop::IONetwork::P2PUdpBuilder **v15; // [esp+20h] [ebp-18h]
  char *v16; // [esp+24h] [ebp-14h]
  int v17; // [esp+28h] [ebp-10h]
  int v18; // [esp+34h] [ebp-4h]

  v3 = (Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 168);
  Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 168));
  v4 = *((_DWORD *)this + 54);
  Outpop::Utility::Thread_Mutex::release(v3);
  v5 = (volatile LONG *)Outpop::Utility::Binary_Stream::operator new(0x48u);
  lpAddend = v5;
  v18 = 0;
  if ( v5 )
  {
    Outpop::Utility::Binary_Stream::Binary_Stream((Outpop::Utility::Binary_Stream *)v5, a2);
    *v5 = (volatile LONG)&Outpop::Utility::Binary_Stream::`vftable';
  }
  else
  {
    v5 = 0;
  }
  v18 = -1;
  v13 = v5;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v5);
  v18 = 1;
  v6 = *((_DWORD *)this + 49);
  v7 = *((_DWORD *)this + 26) + v4;
  lpAddend = (volatile LONG *)((char *)this + 196);
  if ( v6 <= v7 )
  {
    v16 = (char *)this + 144;
    v8 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 144));
    v17 = v8 - 1;
    LOBYTE(v18) = 2;
    if ( !v8 )
    {
LABEL_10:
      v18 = -1;
      if ( v5 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v5);
      return -1;
    }
    v12 = 0;
    v15 = &v11;
    v11 = this;
    Outpop::Utility::Ref_Object::addref(this);
    LOBYTE(v18) = 3;
    v10 = *((_DWORD *)this + 48);
    LOBYTE(v18) = 2;
    if ( sub_1004E0A0(v10, &v13, a2, v11, v12) == -1 )
    {
      LOBYTE(v18) = 1;
      v17 = -1;
      Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 144));
      goto LABEL_10;
    }
    InterlockedIncrement(lpAddend);
    LOBYTE(v18) = 1;
    v17 = -1;
    Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 144));
  }
  v18 = -1;
  if ( v5 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v5);
  return 0;
}
