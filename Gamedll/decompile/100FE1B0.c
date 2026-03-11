/*
 * func-name: ?RenderAfter@AEquip@GameClient@@UAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x100fe1b0
 * callers: 0x10015154
 * callees: none
 */

void __thiscall GameClient::AEquip::RenderAfter(GameClient::AEquip *this, struct Shader *a2, struct Material *a3)
{
  int v3; // eax

  v3 = RenderDevice::Instance(this);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 195, 0);
}
