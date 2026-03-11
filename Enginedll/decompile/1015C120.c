/*
 * func-name: StartAddress
 * func-address: 0x1015c120
 * callers: 0x1015c210
 * callees: 0x10038ca0
 */

unsigned int __stdcall StartAddress(void *a1)
{
  if ( a1 )
  {
    sub_10038CA0(dword_10282F2C, *((float **)a1 + 16), (int *)a1);
    InterlockedIncrement((volatile LONG *)a1 + 19);
  }
  endthreadex(0);
  return 0;
}
