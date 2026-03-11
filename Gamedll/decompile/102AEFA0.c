/*
 * func-name: sub_102AEFA0
 * func-address: 0x102aefa0
 * callers: 0x100186ba
 * callees: none
 */

void __thiscall sub_102AEFA0(Outpop::P2P::Peer **this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  Outpop::P2P::Peer::stop(this[20]);
  Outpop::Utility::Task::wait((Outpop::Utility::Task *)this);
  if ( dword_103B677C )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)dword_103B677C);
  dword_103B677C = 0;
  v2 = this[20];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  this[20] = 0;
}
