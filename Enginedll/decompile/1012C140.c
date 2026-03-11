/*
 * func-name: ?ResetSkyState@SkyController@@QAEXXZ
 * func-address: 0x1012c140
 * callers: 0x1012de10
 * callees: none
 */

void __thiscall SkyController::ResetSkyState(SkyController *this)
{
  float *v1; // eax
  _BYTE *v2; // edx
  int v3; // esi

  *((float *)this + 946) = -1.0e10;
  *((_DWORD *)this + 264) = 0;
  *((_DWORD *)this + 265) = 0;
  *((float *)this + 948) = 0.0;
  v1 = (float *)((char *)this + 1064);
  v2 = (char *)this + 3832;
  v3 = 36;
  do
  {
    *v2 = 0;
    *v1++ = 0.0;
    v2 += 16;
    --v3;
  }
  while ( v3 );
  *((_BYTE *)this + 3724) = 0;
  PyObject_CallMethod(*((_DWORD *)SkyController::m_ControllerScript + 33), "InitSkyMidnightState", 0);
}
