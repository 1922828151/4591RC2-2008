/*
 * func-name: ?Instance@BatchRenderer@@SAPAV1@XZ
 * func-address: 0x10055320
 * callers: 0x10055990, 0x10055de0, 0x1005b6b0, 0x100efe90, 0x100f04f0, 0x101282d0, 0x10128c50, 0x10139150, 0x10139890, 0x1015c210, 0x1016dcd0
 * callees: none
 */

struct BatchRenderer *__cdecl BatchRenderer::Instance()
{
  if ( (dword_10284C2C & 1) == 0 )
  {
    dword_10284C2C |= 1u;
    dword_10284808 = (int)&BatchRenderer::`vftable';
    dword_10284C28 = 0;
    dword_10284C24 = 0;
    byte_1028480C = 0;
    dword_10284C20 = 0;
    dword_10284C14 = 0;
  }
  return (struct BatchRenderer *)&dword_10284808;
}
