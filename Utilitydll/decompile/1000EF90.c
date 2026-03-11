/*
 * func-name: ?write@Stream_Base@Utility@Outpop@@QAEHPBDH@Z
 * func-address: 0x1000ef90
 * callers: none
 * callees: 0x1000ebe0, 0x10019580, 0x10019586
 */

int __thiscall Outpop::Utility::Stream_Base::write(Outpop::Utility::Stream_Base *this, const char *Src, int Size)
{
  int v4; // eax
  _DWORD *v5; // ecx
  _BYTE pExceptionObject[20]; // [esp+Ch] [ebp-3Ch] BYREF
  int v8[7]; // [esp+20h] [ebp-28h] BYREF
  int v9; // [esp+44h] [ebp-4h]

  if ( !*((_BYTE *)this + 20) )
  {
    std::string::string(
      v8,
      " Binary_Stream::write(const char *buffer, int size) error,!this->owner_ || size > get_space()!");
    v9 = 0;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v8,
      -1,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  if ( Size > *(_DWORD *)(*((_DWORD *)this + 2) + 4) - *((_DWORD *)this + 3) )
    (*(void (__thiscall **)(Outpop::Utility::Stream_Base *, int))(*(_DWORD *)this + 16))(
      this,
      Size + *((_DWORD *)this + 7));
  v4 = *((_DWORD *)this + 3);
  v5 = (_DWORD *)*((_DWORD *)this + 2);
  if ( v4 + Size > v5[1] || (memcpy((void *)(v4 + *v5), Src, Size), Size == -1) )
  {
    std::string::string(v8, " Binary_Stream::write(const char *buffer, int size) error,result return is -1!");
    v9 = 1;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v8,
      -1,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  *((_DWORD *)this + 3) += Size;
  return Size;
}
