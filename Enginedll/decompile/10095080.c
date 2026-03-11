/*
 * func-name: sub_10095080
 * func-address: 0x10095080
 * callers: 0x1001d7b0, 0x100230f0, 0x10027400, 0x10027650, 0x100278a0, 0x10027af0, 0x10027d40, 0x10027f90, 0x100281e0, 0x10028430, 0x1003b960, 0x1003bbe0, 0x1006cc40, 0x1006e7d0, 0x100905a0, 0x10090d20, 0x10095110, 0x100d0fe0, 0x100f62a0, 0x100f6350, 0x100f66b0, 0x100f70d0, 0x1010fed0, 0x1010ff80, 0x10110030, 0x10110150, 0x10110200, 0x101102b0, 0x10110360, 0x101108c0, 0x10110b10, 0x10110d60, 0x10110fb0, 0x10111200, 0x10111450, 0x101116a0, 0x10135d20, 0x1016fe70, 0x1016ff20, 0x1016ffd0, 0x10175990, 0x10175be0, 0x10175c90, 0x10175d40, 0x10175df0
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_10095080(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 8 )
    {
      a1 = 0;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a1);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v1 = 0;
  }
  return operator new(8 * v1);
}
