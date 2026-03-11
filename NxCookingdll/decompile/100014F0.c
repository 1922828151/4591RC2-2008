/*
 * func-name: sub_100014F0
 * func-address: 0x100014f0
 * callers: 0x10001320
 * callees: none
 */

LPCRITICAL_SECTION __thiscall sub_100014F0(LPCRITICAL_SECTION *this)
{
  LPCRITICAL_SECTION result; // eax

  DeleteCriticalSection(*this);
  result = *this;
  if ( *this )
  {
    result = (LPCRITICAL_SECTION)(*(int (__thiscall **)(int, LPCRITICAL_SECTION))(*(_DWORD *)dword_100580A0 + 20))(
                                   dword_100580A0,
                                   *this);
    *this = 0;
  }
  return result;
}
