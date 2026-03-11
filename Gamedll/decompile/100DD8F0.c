/*
 * func-name: ?Instance@CameraHandler@@SAPAV1@XZ_0
 * func-address: 0x100dd8f0
 * callers: 0x1000a097
 * callees: 0x10006f14, 0x102c9f53
 */

struct CameraHandler *__cdecl CameraHandler::Instance()
{
  if ( (dword_103B5C0C & 1) == 0 )
  {
    dword_103B5C0C |= 1u;
    CameraHandler::CameraHandler((CameraHandler *)&unk_103B5880);
    atexit(sub_10305840);
  }
  return (struct CameraHandler *)&unk_103B5880;
}
