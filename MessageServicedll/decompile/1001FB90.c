/*
 * func-name: ?dispatch_channel_connect_failed@Handler_Manager@Message@Outpop@@QAEXHHIHIHAAVINET_Addr@IONetwork@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@73@@Z
 * func-address: 0x1001fb90
 * callers: 0x100133b0
 * callees: 0x1001ed40
 */

void __thiscall Outpop::Message::Handler_Manager::dispatch_channel_connect_failed(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const struct Outpop::IONetwork::INET_Addr *a8,
        Outpop::Utility::Ref_Object **a9,
        Outpop::Utility::Ref_Object **a10)
{
  Outpop::Utility::Sect_Block_Allocator *v11; // eax
  Outpop::Utility::Ref_Object *v12; // eax
  Outpop::Utility::Ref_Object *v13; // eax
  Outpop::Utility::Ref_Object *v14[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v15; // [esp+2Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 52) )
  {
    v11 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(72);
    v12 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Sect_Block_Allocator::malloc(v11);
    v14[1] = v12;
    v15 = 0;
    if ( v12 )
      v13 = (Outpop::Utility::Ref_Object *)sub_1001ED40(
                                             v12,
                                             *(_DWORD *)(this + 44),
                                             a2,
                                             a5,
                                             a6,
                                             a3,
                                             a4,
                                             a7,
                                             a8,
                                             a9,
                                             a10);
    else
      v13 = 0;
    v15 = -1;
    v14[0] = v13;
    if ( v13 )
      Outpop::Utility::Ref_Object::addref(v13);
    v15 = 1;
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 48) + 8))(
      *(_DWORD *)(this + 48),
      v14);
    v15 = -1;
    if ( v14[0] )
      Outpop::Utility::Ref_Object::release(v14[0]);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int, int, int, int, int, const struct Outpop::IONetwork::INET_Addr *, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 44) + 12))(
      *(_DWORD *)(this + 44),
      a2,
      a5,
      a6,
      a3,
      a4,
      a7,
      a8,
      a9,
      a10);
  }
}
