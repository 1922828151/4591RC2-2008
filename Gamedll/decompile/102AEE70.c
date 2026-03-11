/*
 * func-name: sub_102AEE70
 * func-address: 0x102aee70
 * callers: 0x10010974
 * callees: 0x1000ad12, 0x102c9d98
 */

int __thiscall sub_102AEE70(int this)
{
  Outpop::Utility::Ref_Object *v2; // esi
  Outpop::Utility::Ref_Object *v3; // ecx

  if ( operator new(0xA8u) )
    v2 = (Outpop::Utility::Ref_Object *)sub_1000AD12(*(_BYTE *)(this + 76));
  else
    v2 = 0;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 80);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  *(_DWORD *)(this + 80) = v2;
  if ( v2 )
  {
    Outpop::Utility::Ref_Object::addref(v2);
    Outpop::Utility::Ref_Object::release(v2);
  }
  if ( dword_103B677C )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)dword_103B677C);
  dword_103B677C = *(_DWORD *)(this + 80);
  if ( dword_103B677C )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)dword_103B677C);
  Outpop::P2P::Peer::init(*(Outpop::P2P::Peer **)(this + 80));
  Outpop::P2P::Peer::start(*(Outpop::P2P::Peer **)(this + 80));
  Outpop::P2P::Peer::run(*(Outpop::P2P::Peer **)(this + 80));
  return 0;
}
