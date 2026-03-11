/*
 * func-name: ?set_callback@Barrier@Utility@Outpop@@QAEXP6AXPAX@Z0@Z
 * func-address: 0x1000c290
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Barrier::set_callback(
        Outpop::Utility::Barrier *this,
        void (__cdecl *a2)(void *),
        void *a3)
{
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
}
