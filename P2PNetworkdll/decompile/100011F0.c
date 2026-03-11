/*
 * func-name: ??0P2P_Context@P2P@Outpop@@QAE@ABV012@@Z
 * func-address: 0x100011f0
 * callers: none
 * callees: none
 */

Outpop::P2P::P2P_Context *__thiscall Outpop::P2P::P2P_Context::P2P_Context(
        Outpop::P2P::P2P_Context *this,
        const struct Outpop::P2P::P2P_Context *a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx

  *(_DWORD *)this = &Outpop::P2P::P2P_Context::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::P2P::P2P_Context *)((char *)this + 48),
    (const struct Outpop::P2P::P2P_Context *)((char *)a2 + 48));
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)a2 + 19);
  *((_DWORD *)this + 19) = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  *((_WORD *)this + 40) = *((_WORD *)a2 + 40);
  *((_BYTE *)this + 82) = *((_BYTE *)a2 + 82);
  return this;
}
