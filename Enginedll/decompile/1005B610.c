/*
 * func-name: ?GetLights@SkyController@@QAE?AV?$vector@PAVLight@@V?$allocator@PAVLight@@@std@@@std@@XZ
 * func-address: 0x1005b610
 * callers: 0x10117a10
 * callees: 0x10052ae0
 */

_DWORD *__thiscall SkyController::GetLights(int *this, _DWORD *a2)
{
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  if ( this[307] )
    sub_10052AE0(a2, this + 307);
  return a2;
}
