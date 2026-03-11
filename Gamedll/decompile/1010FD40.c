/*
 * func-name: ?RenderBefore@CombinRobot@GameClient@@UAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x1010fd40
 * callers: 0x1000f96b
 * callees: none
 */

void __thiscall GameClient::CombinRobot::RenderBefore(
        GameClient::CombinRobot *this,
        struct Shader *a2,
        struct Material *a3)
{
  int v3; // eax

  if ( *((_BYTE *)this + 1392) )
  {
    if ( *((_DWORD *)this + 349) )
    {
      v3 = RenderDevice::Instance(this);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 195, -0.2);
    }
  }
}
