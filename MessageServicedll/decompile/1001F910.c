/*
 * func-name: ?dispatch_new_channel_build@Handler_Manager@Message@Outpop@@QAEXHHIHIAAVINET_Addr@IONetwork@3@0AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@W4EIOChannelType@53@HAAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@73@@Z
 * func-address: 0x1001f910
 * callers: 0x1000e370, 0x10013610
 * callees: 0x1001e990
 */

void __thiscall Outpop::Message::Handler_Manager::dispatch_new_channel_build(
        int this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const struct Outpop::IONetwork::INET_Addr *a7,
        const struct Outpop::IONetwork::INET_Addr *a8,
        Outpop::Utility::Ref_Object **a9,
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
      v15 = (Outpop::Utility::Ref_Object *)sub_1001E990(
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
    (*(void (__thiscall **)(_DWORD, int, int, int, int, int, const struct Outpop::IONetwork::INET_Addr *, const struct Outpop::IONetwork::INET_Addr *, Outpop::Utility::Ref_Object **, int, int, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 44) + 4))(
      *(_DWORD *)(this + 44),
      a2,
      a3,
      a4,
      a5,
      a6,
      a8,
      a7,
      a9,
      a10,
      a11,
      a12);
  }
}
