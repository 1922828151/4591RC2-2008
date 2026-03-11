/*
 * func-name: ?create_stream@Channel_Manager@Message@Outpop@@UAE?AV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@I@Z
 * func-address: 0x10011e60
 * callers: none
 * callees: 0x10020a00
 */

Outpop::Utility::Ref_Object **__stdcall Outpop::Message::Channel_Manager::create_stream(
        Outpop::Utility::Ref_Object **a1,
        unsigned int a2)
{
  Outpop::Utility::Sect_Block_Allocator *v2; // eax
  Outpop::Message::Message *v3; // eax
  Outpop::Utility::Ref_Object *v4; // eax

  v2 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(108);
  v3 = (Outpop::Message::Message *)Outpop::Utility::Sect_Block_Allocator::malloc(v2);
  if ( v3 )
    v4 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::Message(v3, a2);
  else
    v4 = 0;
  *a1 = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  return a1;
}
