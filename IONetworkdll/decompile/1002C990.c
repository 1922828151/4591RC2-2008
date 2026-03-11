/*
 * func-name: ??4Dgram_Connector@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1002c990
 * callers: none
 * callees: 0x100046e0, 0x1002bd30
 */

int __thiscall Outpop::IONetwork::Dgram_Connector::operator=(int this, int a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  _DWORD *v6; // eax

  if ( this != a2 )
    *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  Outpop::IONetwork::Connector_Config::operator=(this + 12, a2 + 12);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 124) + 16))(a2 + 124);
  v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 124) + 16))(this + 124);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 152) + 16))(a2 + 152);
  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 152) + 16))(this + 152);
  *v6 = *v5;
  v6[1] = v5[1];
  v6[2] = v5[2];
  v6[3] = v5[3];
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  *(_DWORD *)(this + 192) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(this + 196) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(this + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(this + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(this + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(this + 220) = *(_DWORD *)(a2 + 220);
  *(_DWORD *)(this + 224) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(this + 236) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(this + 240) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(this + 244) = *(_DWORD *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  if ( this + 256 != a2 + 256 )
    sub_1002BD30(this + 256, a2 + 256);
  if ( this + 296 != a2 + 296 )
    sub_1002BD30(this + 296, a2 + 296);
  if ( this + 336 != a2 + 336 )
    sub_1002BD30(this + 336, a2 + 336);
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(this + 380) = *(_DWORD *)(a2 + 380);
  *(_DWORD *)(this + 384) = *(_DWORD *)(a2 + 384);
  *(_BYTE *)(this + 388) = *(_BYTE *)(a2 + 388);
  return this;
}
