/*
 * func-name: ??0Event@@QAE@IMW4EVENT_ACTION_TYPE@@@Z
 * func-address: 0x1016ec20
 * callers: 0x1016f450
 * callees: none
 */

float *__thiscall Event::Event(float *this, int a2, float a3, int a4)
{
  float *result; // eax

  result = this;
  this[2] = a3;
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &Event::`vftable';
  *((_DWORD *)this + 3) = a4;
  this[4] = NAN;
  this[5] = 0.0;
  this[6] = 0.0;
  this[7] = 0.0;
  this[8] = 0.0;
  *((_DWORD *)this + 9) = &BinStream::`vftable';
  this[10] = 0.0;
  this[11] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  return result;
}
