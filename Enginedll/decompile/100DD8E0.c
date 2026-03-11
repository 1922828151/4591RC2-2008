/*
 * func-name: ??0LightState@@QAE@ABUFloatColor@@M@Z
 * func-address: 0x100dd8e0
 * callers: none
 * callees: 0x101a251c
 */

LightState *__thiscall LightState::LightState(LightState *this, const struct FloatColor *a2, float a3)
{
  int v4; // edx
  LightState *result; // eax

  *(float *)this = 0.0;
  *((float *)this + 1) = 0.0;
  *((float *)this + 2) = 0.0;
  *((float *)this + 3) = 0.0;
  *((float *)this + 5) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 10) = 0.0;
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 14) = 0.0;
  memset(this, 0, 0x48u);
  *((float *)this + 9) = -1.0;
  *((float *)this + 10) = -1.0;
  *((float *)this + 11) = -1.0;
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 3);
  *((float *)this + 15) = a3;
  *((_DWORD *)this + 3) = v4;
  *((float *)this + 4) = 1.0;
  result = this;
  *((float *)this + 17) = 80.0;
  *((float *)this + 16) = 100.0;
  return result;
}
