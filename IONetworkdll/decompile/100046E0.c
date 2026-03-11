/*
 * func-name: ??4Connector_Config@IONetwork@Outpop@@QAEAAU012@ABU012@@Z
 * func-address: 0x100046e0
 * callers: 0x10004eb0, 0x1001db00, 0x1001de00, 0x1002c990, 0x100368f0
 * callees: none
 */

int __thiscall Outpop::IONetwork::Connector_Config::operator=(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // esi
  _DWORD *v5; // eax
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v9; // ecx

  qmemcpy((void *)this, (const void *)a2, 0x2Cu);
  v3 = this + 44;
  v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 44) + 16))(a2 + 44);
  v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 16))(v3);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  *(_BYTE *)(this + 72) = *(_BYTE *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  v6 = *(Outpop::Utility::Ref_Object **)(this + 80);
  if ( v6 )
    Outpop::Utility::Ref_Object::release(v6);
  v7 = *(Outpop::Utility::Ref_Object **)(a2 + 80);
  *(_DWORD *)(this + 80) = v7;
  if ( v7 )
    Outpop::Utility::Ref_Object::addref(v7);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  v8 = *(Outpop::Utility::Ref_Object **)(this + 92);
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  v9 = *(Outpop::Utility::Ref_Object **)(a2 + 92);
  *(_DWORD *)(this + 92) = v9;
  if ( v9 )
    Outpop::Utility::Ref_Object::addref(v9);
  return this;
}
