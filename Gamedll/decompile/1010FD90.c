/*
 * func-name: ?RenderAfter@CombinRobot@GameClient@@UAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x1010fd90
 * callers: 0x10013ee4
 * callees: none
 */

void __thiscall GameClient::CombinRobot::RenderAfter(
        GameClient::CombinRobot *this,
        struct Shader *a2,
        struct Material *a3)
{
  int v3; // eax

  v3 = RenderDevice::Instance(this);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 195, 0);
}
