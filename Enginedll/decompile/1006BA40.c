/*
 * func-name: ?GetLastHotZone@CHotZonePic@@QAEHXZ
 * func-address: 0x1006ba40
 * callers: none
 * callees: none
 */

int __thiscall CHotZonePic::GetLastHotZone(CHotZonePic *this)
{
  int result; // eax

  result = *((_DWORD *)this + 135);
  *((_DWORD *)this + 135) = -1;
  return result;
}
