/*
 * func-name: ?on_new_channel@P2PUdpBuilder@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@53@@Z
 * func-address: 0x1004b8f0
 * callers: 0x10044a00
 * callees: none
 */

void __thiscall Outpop::IONetwork::P2PUdpBuilder::on_new_channel(Outpop::Utility::Ref_Object *this, int a2, int a3)
{
  Outpop::Utility::Ref_Object *v4; // [esp+Ch] [ebp-10h] BYREF
  int v5; // [esp+18h] [ebp-4h]

  if ( *((_DWORD *)this + 28) )
  {
    v4 = this;
    Outpop::Utility::Ref_Object::addref(this);
    v5 = 0;
    (*(void (__thiscall **)(_DWORD *, int, int, Outpop::Utility::Ref_Object **))(**((_DWORD **)this + 28) + 20))(
      *((_DWORD **)this + 28),
      a2,
      a3,
      &v4);
    v5 = -1;
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
  }
}
