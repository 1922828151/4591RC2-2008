/*
 * func-name: ?IsMotionBlurUsed@PostProcess@@QAE_NXZ
 * func-address: 0x10105580
 * callers: none
 * callees: none
 */

BOOL __thiscall PostProcess::IsMotionBlurUsed(PostProcess *this)
{
  return *((_BYTE *)this + 1) && *((_DWORD *)this + 3);
}
