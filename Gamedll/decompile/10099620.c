/*
 * func-name: ?SignedRand@TraceLineSystem@@QAEMXZ_0
 * func-address: 0x10099620
 * callers: 0x1000ae4d
 * callees: none
 */

double __thiscall TraceLineSystem::SignedRand(TraceLineSystem *this)
{
  int v1; // eax

  v1 = rand();
  return (float)((double)v1 / 32767.0 + (double)v1 / 32767.0 - 1.0);
}
