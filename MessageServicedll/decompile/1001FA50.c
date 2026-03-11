/*
 * func-name: ?dispatch_error_channel@Handler_Manager@Message@Outpop@@QAEXHHIHIHAAVINET_Addr@IONetwork@3@0W4EIOChannelType@53@HAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1001fa50
 * callers: 0x10010a20
 * callees: 0x1001eb80
 */

void __thiscall Outpop::Message::Handler_Manager::dispatch_error_channel(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const struct Outpop::IONetwork::INET_Addr *a8,
        const struct Outpop::IONetwork::INET_Addr *a9,
        int a10,
        int a11,
        Outpop::Utility::Ref_Object **a12)
{
  Outpop::Utility::Sect_Block_Allocator *v13; // eax
  Outpop::Utility::Ref_Object *v14; // eax
  Outpop::Utility::Ref_Object *v15; // eax
  Outpop::Utility::Ref_Object *v16[2]; // [esp+24h] [ebp-14h] BYREF
  int v17; // [esp+34h] [ebp-4h]

  if ( *(_DWORD *)(this + 52) )
  {
    v13 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(104);
    v14 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Sect_Block_Allocator::malloc(v13);
    v16[1] = v14;
    v17 = 0;
    if ( v14 )
      v15 = (Outpop::Utility::Ref_Object *)sub_1001EB80(
                                             v14,
                                             *(_DWORD *)(this + 44),
                                             a2,
                                             a3,
                                             a4,
                                             a5,
                                             a6,
                                             a7,
                                             a8,
                                             a9,
                                             a10,
                                             a11,
                                             a12);
    else
      v15 = 0;
    v17 = -1;
    v16[0] = v15;
    if ( v15 )
      Outpop::Utility::Ref_Object::addref(v15);
    v17 = 1;
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 48) + 8))(
      *(_DWORD *)(this + 48),
      v16);
    v17 = -1;
    if ( v16[0] )
      Outpop::Utility::Ref_Object::release(v16[0]);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int, int, int, int, int, int, const struct Outpop::IONetwork::INET_Addr *, const struct Outpop::IONetwork::INET_Addr *, int, int, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 44) + 8))(
      *(_DWORD *)(this + 44),
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a9,
      a8,
      a10,
      a11,
      a12);
  }
}
