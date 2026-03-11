/*
 * func-name: sub_1000DC60
 * func-address: 0x1000dc60
 * callers: 0x1000dd50
 * callees: 0x10020860
 */

Outpop::Utility::Ref_Object **__stdcall sub_1000DC60(Outpop::Utility::Ref_Object **a1)
{
  Outpop::Utility::Sect_Block_Allocator *v1; // eax
  void *v2; // eax
  Outpop::Utility::Ref_Object *v3; // esi

  *a1 = 0;
  v1 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
  v2 = Outpop::Utility::Sect_Block_Allocator::malloc(v1);
  if ( v2 )
    v3 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::Message(v2, 0, 0, 2, 0, 32);
  else
    v3 = 0;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  if ( *a1 )
    Outpop::Utility::Ref_Object::release(*a1);
  *a1 = v3;
  if ( v3 )
  {
    Outpop::Utility::Ref_Object::addref(v3);
    Outpop::Utility::Ref_Object::release(v3);
  }
  if ( ((*((_BYTE *)*a1 + 96) >> 4) & 0xF) != 0 )
    *(_WORD *)(((*((_BYTE *)*a1 + 96) >> 4) & 0xF) + *((_DWORD *)*a1 + 25)) = 1;
  return a1;
}
