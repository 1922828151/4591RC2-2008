/*
 * func-name: sub_1001B350
 * func-address: 0x1001b350
 * callers: 0x1001d580, 0x10021f60, 0x1003e4b0, 0x10061f30, 0x10062270, 0x10062b80, 0x100f6bc0, 0x101006c0, 0x101157a0
 * callees: 0x101a2522, 0x101a2534
 */

void *__cdecl sub_1001B350(unsigned int a1)
{
  unsigned int v1; // ecx
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / a1 < 0x10 )
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
  return operator new(16 * v1);
}
