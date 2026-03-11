/*
 * func-name: sub_10012279
 * func-address: 0x10012279
 * callers: 0x1000b1b5, 0x1000b1c0, 0x1000e560, 0x1000e56b, 0x1001229c, 0x1001b001
 * callees: 0x10009f93
 */

void __thiscall sub_10012279(void *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_DWORD *)this = &std::exception::`vftable';
  if ( !v1 )
    free(*((void **)this + 1));
}
