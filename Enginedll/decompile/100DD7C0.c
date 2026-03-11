/*
 * func-name: ??0LightState@@QAE@XZ
 * func-address: 0x100dd7c0
 * callers: 0x10005a20, 0x100de9e0, 0x100dead0, 0x100df590, 0x100df7d0, 0x1012ffd0
 * callees: 0x101a251c
 */

LightState *__thiscall LightState::LightState(LightState *this)
{
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
  *((float *)this + 4) = 1.0;
  *((float *)this + 15) = 25.0;
  *(float *)this = 1.0;
  *((float *)this + 17) = 80.0;
  *((float *)this + 1) = 1.0;
  *((float *)this + 2) = 1.0;
  *((float *)this + 3) = 1.0;
  *((float *)this + 16) = 100.0;
  return this;
}
