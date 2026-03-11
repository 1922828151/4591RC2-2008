/*
 * func-name: ??0Stream_Base@Utility@Outpop@@QAE@H@Z
 * func-address: 0x1000ec50
 * callers: 0x1000e630, 0x1000f2f0
 * callees: 0x10005a90, 0x1000e110, 0x1000e340, 0x1000ea30, 0x1000ebe0, 0x10019586
 */

Outpop::Utility::Stream_Base *__thiscall Outpop::Utility::Stream_Base::Stream_Base(
        Outpop::Utility::Stream_Base *this,
        int a2)
{
  int v3; // edi
  struct Outpop::Utility::Sect_Block_Allocator *v4; // eax
  _BYTE *v5; // eax
  _BYTE v7[12]; // [esp+1Ch] [ebp-48h] BYREF
  _BYTE pExceptionObject[20]; // [esp+28h] [ebp-3Ch] BYREF
  int v9[7]; // [esp+3Ch] [ebp-28h] BYREF
  int v10; // [esp+60h] [ebp-4h]

  *(_DWORD *)this = &Outpop::Utility::Ref_Object::`vftable';
  *((_DWORD *)this + 1) = 0;
  v10 = 0;
  *(_DWORD *)this = &Outpop::Utility::Stream_Base::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  LOBYTE(v10) = 1;
  if ( a2 > 1024000 )
  {
    std::string::string(v9, "Stream_Base::Stream_Base(int size): size > 1024 * 100");
    LOBYTE(v10) = 2;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v9,
      0,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  LOBYTE(v10) = 3;
  v3 = *((_DWORD *)this + 8);
  if ( v3 && !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  *((_DWORD *)this + 8) = 0;
  LOBYTE(v10) = 1;
  *((_BYTE *)this + 20) = 1;
  *((_DWORD *)this + 7) = a2;
  v4 = Outpop::Utility::Sect_Block_Allocator::instance();
  v5 = sub_10005A90((int)v4);
  *v5 = 0;
  if ( v5 == (_BYTE *)-1 )
  {
    sub_1000E340((std::exception *)v7);
    CxxThrowException(v7, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  *((_DWORD *)this + 2) = Outpop::Utility::OS_Buffer::OS_Buffer((Outpop::Utility::OS_Buffer *)(v5 + 1), a2);
  return this;
}
