/*
 * func-name: ?resize@Stream_Base@Utility@Outpop@@UAE_NH@Z
 * func-address: 0x1000f830
 * callers: none
 * callees: 0x10002e30, 0x1000e110, 0x1000e3a0, 0x1000ea30, 0x1000ebe0, 0x1000ef70, 0x10019580, 0x10019586
 */

char __thiscall Outpop::Utility::Stream_Base::resize(Outpop::Utility::Stream_Base *this, int a2)
{
  Outpop::Utility::Sect_Block_Allocator *v4; // eax
  int v5; // edx
  char *v6; // eax
  void **v7; // ebp
  char *v8; // esi
  char *v9; // [esp-8h] [ebp-58h]
  _BYTE pExceptionObject[20]; // [esp+14h] [ebp-3Ch] BYREF
  int v11[7]; // [esp+28h] [ebp-28h] BYREF
  int v12; // [esp+4Ch] [ebp-4h]

  if ( a2 > 102400 )
  {
    std::string::string(v11, "  Stream_Base::resize  len > 1024 * 100 ");
    v12 = 0;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v11,
      0,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  if ( !*((_BYTE *)this + 20) )
    return 0;
  if ( a2 >= *((_DWORD *)this + 7) )
  {
    v9 = (char *)**((_DWORD **)this + 2);
    v4 = Outpop::Utility::Sect_Block_Allocator::instance();
    if ( Outpop::Utility::Sect_Block_Allocator::realloc(v4, v9, a2) )
    {
      v5 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 7) = a2;
      *(_DWORD *)(v5 + 4) = a2;
    }
    else
    {
      v6 = Outpop::Utility::OS_Buffer::operator new();
      v12 = 1;
      if ( v6 )
        v7 = (void **)Outpop::Utility::OS_Buffer::OS_Buffer((Outpop::Utility::OS_Buffer *)v6, a2);
      else
        v7 = 0;
      v12 = -1;
      memcpy(*v7, **((const void ***)this + 2), *((_DWORD *)this + 7));
      v8 = (char *)*((_DWORD *)this + 2);
      if ( v8 )
        sub_1000EF70(v8);
      *((_DWORD *)this + 2) = v7;
      *((_DWORD *)this + 7) = a2;
    }
  }
  return 1;
}
