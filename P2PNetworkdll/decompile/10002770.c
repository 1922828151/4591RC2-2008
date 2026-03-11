/*
 * func-name: ??4Peer@P2P@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10002770
 * callers: none
 * callees: 0x100079c0, 0x10007e60
 */

int __thiscall Outpop::P2P::Peer::operator=(int this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  int v5; // eax
  int v6; // eax
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Ref_Object *v10; // ecx
  Outpop::Utility::Ref_Object *v11; // ecx
  Outpop::Utility::Ref_Object *v12; // ecx

  if ( this != a2 )
    *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 24);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *(Outpop::Utility::Ref_Object **)(a2 + 24);
  *(_DWORD *)(this + 24) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v5 = *(_DWORD *)(this + 28);
  if ( v5 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v5 + 76));
  v6 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 28) = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)(v6 + 76));
  std::string::operator=(this + 32, a2 + 32);
  if ( this + 60 != a2 + 60 )
    sub_100079C0(this + 60, a2 + 60);
  v7 = *(Outpop::Utility::Ref_Object **)(this + 100);
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = *(Outpop::Utility::Ref_Object **)(a2 + 100);
  *(_DWORD *)(this + 100) = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  v9 = *(Outpop::Utility::Ref_Object **)(this + 104);
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  v10 = *(Outpop::Utility::Ref_Object **)(a2 + 104);
  *(_DWORD *)(this + 104) = v10;
  if ( v10 )
    Outpop::Utility::Ref_Object::addref(v10);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  if ( this + 112 != a2 + 112 )
    sub_10007E60(this + 112, a2 + 112);
  v11 = *(Outpop::Utility::Ref_Object **)(this + 152);
  if ( v11 )
    Outpop::Utility::Ref_Object::release(v11);
  v12 = *(Outpop::Utility::Ref_Object **)(a2 + 152);
  *(_DWORD *)(this + 152) = v12;
  if ( v12 )
    Outpop::Utility::Ref_Object::addref(v12);
  *(_BYTE *)(this + 156) = *(_BYTE *)(a2 + 156);
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160);
  return this;
}
