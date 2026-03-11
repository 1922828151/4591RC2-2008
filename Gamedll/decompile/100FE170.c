/*
 * func-name: ?RenderBefore@AEquip@GameClient@@UAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x100fe170
 * callers: 0x10001d2a
 * callees: none
 */

void __thiscall GameClient::AEquip::RenderBefore(GameClient::AEquip *this, struct Shader *a2, struct Material *a3)
{
  int v3; // eax

  if ( *((_BYTE *)this + 1384) )
  {
    v3 = RenderDevice::Instance();
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 195, -0.2);
  }
}
