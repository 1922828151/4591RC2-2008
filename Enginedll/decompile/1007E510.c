/*
 * func-name: ?Advance@CRETimer@@QAEXXZ
 * func-address: 0x1007e510
 * callers: none
 * callees: 0x101a2830
 */

void __thiscall CRETimer::Advance(CRETimer *this)
{
  if ( *(_BYTE *)this )
    *((_QWORD *)this + 2) += *((_QWORD *)this + 1) / 10LL;
}
