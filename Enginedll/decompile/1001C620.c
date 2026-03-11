/*
 * func-name: ??4Event@@QAEAAV0@ABV0@@Z
 * func-address: 0x1001c620
 * callers: none
 * callees: none
 */

int __thiscall Event::operator=(int this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx
  Outpop::Utility::Ref_Object *v10; // ecx

  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(float *)(this + 8) = *(float *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  v3 = *(Outpop::Utility::Ref_Object **)(this + 20);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = *(Outpop::Utility::Ref_Object **)(a2 + 20);
  *(_DWORD *)(this + 20) = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  v5 = *(Outpop::Utility::Ref_Object **)(this + 24);
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  v6 = *(Outpop::Utility::Ref_Object **)(a2 + 24);
  *(_DWORD *)(this + 24) = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  v7 = *(Outpop::Utility::Ref_Object **)(this + 28);
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = *(Outpop::Utility::Ref_Object **)(a2 + 28);
  *(_DWORD *)(this + 28) = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  v9 = *(Outpop::Utility::Ref_Object **)(this + 32);
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  v10 = *(Outpop::Utility::Ref_Object **)(a2 + 32);
  *(_DWORD *)(this + 32) = v10;
  if ( v10 )
    Outpop::Utility::Ref_Object::addref(v10);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  return this;
}
