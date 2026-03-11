/*
 * func-name: ?GetTotalMS@Profiler@@QAEMXZ
 * func-address: 0x10001ae0
 * callers: none
 * callees: none
 */

double __thiscall Profiler::GetTotalMS(Profiler *this)
{
  return (float)(*((float *)this + 32)
               + *((float *)this + 17)
               + *((float *)this + 18)
               + *((float *)this + 29)
               + *((float *)this + 19)
               + *((float *)this + 21)
               + *((float *)this + 20)
               + *((float *)this + 33)
               + *((float *)this + 22)
               + *((float *)this + 23)
               + *((float *)this + 24)
               + *((float *)this + 26)
               + *((float *)this + 27)
               + *((float *)this + 28)
               + *((float *)this + 30)
               + *((float *)this + 31)
               + *((float *)this + 25));
}
