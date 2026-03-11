/*
 * func-name: ?asynch_receive@Stream_Channel@IONetwork@Outpop@@QAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@HPAX@Z
 * func-address: 0x1000ee60
 * callers: 0x100117b0
 * callees: 0x100155b0
 */

int __thiscall Outpop::IONetwork::Stream_Channel::asynch_receive(
        int this,
        Outpop::Utility::Stream_Base **a2,
        signed int a3,
        int a4)
{
  Outpop::Utility::Thread_Mutex *v5; // ebp
  bool v6; // al
  Outpop::Utility::Stream_Base *v7; // edi
  void (__thiscall **v8)(Outpop::Utility::Stream_Base *, int); // ebp
  int readable; // eax
  int v10; // edi
  int v12; // [esp-8h] [ebp-38h] BYREF
  int v13; // [esp-4h] [ebp-34h]
  DWORD v14[2]; // [esp+14h] [ebp-1Ch] BYREF
  Outpop::Utility::Thread_Mutex *v15; // [esp+1Ch] [ebp-14h]
  int v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-4h]

  v5 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v15 = (Outpop::Utility::Thread_Mutex *)(this + 132);
  v6 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132));
  v16 = v6 - 1;
  v17 = 0;
  if ( !v6 )
    return -1;
  if ( Outpop::Utility::Stream_Base::get_space(*a2) < a3 )
  {
    v7 = *a2;
    v8 = (void (__thiscall **)(Outpop::Utility::Stream_Base *, int))(*(_DWORD *)*a2 + 16);
    readable = Outpop::Utility::Stream_Base::get_readable(*a2);
    (*v8)(v7, a3 + readable);
    v5 = v15;
  }
  v14[0] = 0;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v17) = 1;
  v13 = 0;
  v14[1] = (DWORD)&v12;
  v12 = this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v17) = 1;
  v10 = sub_100155B0(this + 196, a2, a3, v14, v12, v13);
  LOBYTE(v17) = 0;
  if ( this )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)this);
  v17 = -1;
  v16 = -1;
  Outpop::Utility::Thread_Mutex::release(v5);
  return v10;
}
