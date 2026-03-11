/*
 * func-name: ??2Stream_Base@Utility@Outpop@@SAPAXI@Z
 * func-address: 0x1000e4c0
 * callers: 0x1000f490
 * callees: 0x10005a90, 0x1000e110, 0x1000e340, 0x10019586
 */

char *__cdecl Outpop::Utility::Stream_Base::operator new()
{
  struct Outpop::Utility::Sect_Block_Allocator *v0; // eax
  _DWORD *v1; // eax
  bool v2; // zf
  char *result; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  v0 = Outpop::Utility::Sect_Block_Allocator::instance();
  v1 = sub_10005A90((int)v0 + 88);
  v2 = (_DWORD *)((char *)v1 + 1) == 0;
  result = (char *)v1 + 1;
  *(result - 1) = 2;
  if ( v2 )
  {
    sub_1000E340((std::exception *)pExceptionObject);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  return result;
}
