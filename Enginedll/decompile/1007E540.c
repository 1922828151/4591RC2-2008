/*
 * func-name: ?GetAbsoluteTime@CRETimer@@QAENXZ
 * func-address: 0x1007e540
 * callers: 0x100956b0, 0x100958f0, 0x100a59e0, 0x100ac960, 0x100acd90, 0x100af1f0, 0x100bdfc0, 0x100c0490, 0x100c0c50, 0x100c84a0
 * callees: none
 */

double __thiscall CRETimer::GetAbsoluteTime(CRETimer *this)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  LARGE_INTEGER PerformanceCount; // [esp+4h] [ebp-8h] BYREF

  if ( !*(_BYTE *)this )
    return -1.0;
  v3 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 5);
  if ( *((_QWORD *)this + 2) )
  {
    PerformanceCount.QuadPart = __PAIR64__(v4, v3);
    return (double)__SPAIR64__(v4, v3) / (double)*((__int64 *)this + 1);
  }
  else
  {
    QueryPerformanceCounter(&PerformanceCount);
    return (double)PerformanceCount.QuadPart / (double)*((__int64 *)this + 1);
  }
}
