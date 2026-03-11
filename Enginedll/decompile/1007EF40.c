/*
 * func-name: ?GetCameraSpeed@Editor@@QAEMXZ
 * func-address: 0x1007ef40
 * callers: none
 * callees: none
 */

double __thiscall Editor::GetCameraSpeed(Editor *this)
{
  return (float)(*((float *)this + 528) * *((float *)this + 525));
}
