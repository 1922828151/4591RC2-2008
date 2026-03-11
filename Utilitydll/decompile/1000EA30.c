/*
 * func-name: ??0OS_Buffer@Utility@Outpop@@QAE@H@Z
 * func-address: 0x1000ea30
 * callers: 0x1000ec50, 0x1000f830
 * callees: 0x10002f40, 0x1000e110, 0x1000ebe0, 0x10019586
 */

Outpop::Utility::OS_Buffer *__thiscall Outpop::Utility::OS_Buffer::OS_Buffer(
        Outpop::Utility::OS_Buffer *this,
        unsigned int a2)
{
  Outpop::Utility::Sect_Block_Allocator *v3; // eax
  _BYTE *v4; // eax
  _BYTE pExceptionObject[20]; // [esp+8h] [ebp-3Ch] BYREF
  int v7[10]; // [esp+1Ch] [ebp-28h] BYREF

  *((_DWORD *)this + 1) = a2;
  v3 = Outpop::Utility::Sect_Block_Allocator::instance();
  v4 = Outpop::Utility::Sect_Block_Allocator::malloc(v3, a2);
  *(_DWORD *)this = v4;
  if ( !v4 )
  {
    std::string::string(v7, "buffer_  = (char*)Sect_Block_Allocator::instance()->malloc(buffer_size)  is NULL");
    v7[9] = 0;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v7,
      0,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  return this;
}
